cmake_minimum_required(VERSION 3.11)
project(CLAM)

# Ensure tool dependencies.
include(ExternalProject) # Required to download and build external projects (i.e. ANTLR).
find_package(Git REQUIRED) # Need git to download ANTLR through ExternalProject.
find_package(Java COMPONENTS Runtime REQUIRED) # Need java to run ANTLR, but only the runtime.

# Ensure we have LLVM.
include("${CMAKE_SOURCE_DIR}/cmake/get_mlir.cmake")

# Link against the pthreads library to make std::call_once 
# in generated ANTLR code to run without producing system errors
# (see issue https://github.com/antlr/antlr4/issues/3708).
set(THREADS_PREFER_PTHREAD_FLAG TRUE)
find_package(Threads REQUIRED)

# Set C++ standards.
set(CMAKE_CXX_STANDARD 17)

# Add CXX flags.
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wfloat-equal -Wshadow")

# Compile Commands for lsp
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Set to Debug Mode
set(CMAKE_BUILD_TYPE DEBUG)

# Include cmake utilities.
include("${CMAKE_SOURCE_DIR}/cmake/symlink_to_bin.cmake")

# Grab ANTLR.
include("${CMAKE_SOURCE_DIR}/cmake/get_antlr.cmake")

# Set up paths and info to generate ANTLR sources with.
set(GRAMMAR_NAME "CPP")
set(ANTLR_NAMESPACE "ClamParser")


if(NOT EXISTS "${ANTLR_JAR}")
  message(FATAL_ERROR "Unable to find antlr jar. Did we miss a build step?")
endif()

# Get the path to the grammar.
file(TO_CMAKE_PATH "${CMAKE_SOURCE_DIR}/grammar/${GRAMMAR_NAME}.g4" GRAMMAR_PATH)
set(GRAMMAR_PATH "${GRAMMAR_PATH}" CACHE FILEPATH "Path to the grammar file.")

# Set the directory for generated sources (this might be better off in CMAKE_BINARY_DIR).
file(TO_CMAKE_PATH "${CMAKE_SOURCE_DIR}/src/parser/${ANTLR_NAMESPACE}" ANTLR_GEN_DIR)
set(ANTLR_GEN_DIR ${ANTLR_GEN_DIR} CACHE PATH "Generated source directory (ANTLR).")
file(TO_NATIVE_PATH "${ANTLR_GEN_DIR}" GEN_DIR_NATIVE)
message(STATUS "Generated source destination: ${GEN_DIR_NATIVE}")

set(
  ANTLR_GEN_SRC
  "${ANTLR_GEN_DIR}/CPPParserBaseListener.cpp"
  "${ANTLR_GEN_DIR}/CPPParserBaseVisitor.cpp"
  "${ANTLR_GEN_DIR}/CPPLexer.cpp"
  "${ANTLR_GEN_DIR}/CPPParserListener.cpp"
  "${ANTLR_GEN_DIR}/CPPParser.cpp"
  "${ANTLR_GEN_DIR}/CPPParserVisitor.cpp"
  "${ANTLR_GEN_DIR}/CPPParserBase.cpp"
)

set(
  ANTLR_GEN_HEADERS
  "${ANTLR_GEN_DIR}/CPPParserBaseListener.h"
  "${ANTLR_GEN_DIR}/CPPParserBaseVisitor.h"
  "${ANTLR_GEN_DIR}/CPPLexer.h"
  "${ANTLR_GEN_DIR}/CPPParserListener.h"
  "${ANTLR_GEN_DIR}/CPPParser.h"
  "${ANTLR_GEN_DIR}/CPPParserVisitor.h"
  "${ANTLR_GEN_DIR}/CPPParserBase.h"
)

# Build a library from the generated sources.
add_library(parser STATIC ${ANTLR_GEN_SRC})
target_include_directories(parser PUBLIC ${ANTLR_INCLUDE_DIRS})
target_link_libraries(parser PUBLIC Threads::Threads)

# Add the source directory.
add_subdirectory("${CMAKE_SOURCE_DIR}/src")

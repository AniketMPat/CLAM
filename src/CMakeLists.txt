# Gather our source files in this directory.
set(
  clam_src_files
    "${CMAKE_CURRENT_SOURCE_DIR}/main.cpp"
)

# Build our executable from the source files.
add_executable(clamc ${clam_src_files})
target_include_directories(clamc PUBLIC ${ANTLR_GEN_DIR})

# Ensure that the antlr4-runtime is available.
add_dependencies(clamc antlr)

# Find the libraries that correspond to the LLVM components
# that we wish to use
set(LLVM_LINK_COMPONENTS Core Support)
llvm_map_components_to_libnames(llvm_libs support core irreader)
get_property(dialect_libs GLOBAL PROPERTY MLIR_DIALECT_LIBS)

# Add the MLIR, LLVM, antlr runtime and parser as libraries to link.
target_link_libraries(clamc PRIVATE
    parser
    antlr4-runtime
    ${llvm_libs}
    ${dialect_libs}
)

# Symbolic link our executable to the base directory so we don't have to go searching for it.
symlink_to_bin("clamc")

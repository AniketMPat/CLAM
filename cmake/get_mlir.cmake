# Need MLIR so we can link against it. Either we automatically find this in the "default" place or
# it's found because we set up $MLIR_DIR. There should be no additions necessary here.
find_package(LLVM REQUIRED CONFIG)

# Status messages about LLVM found.
message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

# Add mlir specific pieces to our build.
include_directories(${LLVM_INCLUDE_DIRS})
separate_arguments(LLVM_DEFINITIONS_LIST NATIVE_COMMAND ${LLVM_DEFINITIONS})
add_definitions(${LLVM_DEFINITIONS_LIST})

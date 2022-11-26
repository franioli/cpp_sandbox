project(test_classes)
cmake_minimum_required(VERSION 3.0)

# Flags
set(CMAKE_CXX_FLAGS "-Wall")
set(CMAKE_CXX_STANDARD 17)

# # Set directories for bin and lib
# set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
# set(LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)

# Directories where to look for libraries
include_directories(${PROJECT_SOURCE_DIR}/src)

# Directories with source files 
add_subdirectory(${PROJECT_SOURCE_DIR}/src)

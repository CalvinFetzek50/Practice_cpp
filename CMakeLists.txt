# Reference :
# https://www.codegenes.net/blog/how-can-i-build-a-c-project-with-multiple-interdependent-subdirectories/#google_vignette

cmake_minimum_required(VERSION 3.22)
project(
    CppPracticeProject
    VERSION 1.0
    DESCRIPTION "C++ Project with independent subdirectories for practice"
    LANGUAGES CXX
)

# Set C++ standards
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# set output directories for all targets
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin) #executables

# Add subdirectories 
add_subdirectory(func_basic)
add_subdirectory(func_headers)
add_subdirectory(stdio)
add_subdirectory(test)

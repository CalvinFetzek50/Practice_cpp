cmake_minimum_required(VERSION 3.22)
project(dataTypes LANGUAGES CXX)

# set the directory where the bin will be build
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})

# define the library
set (LIB_SOURCES src/operation.cpp src/operation.h)
add_library(dataTypes_lib ${LIB_SOURCES})

# define the executable 
add_executable(dataTypes_run src/main.cpp)
target_link_libraries(dataTypes_run PRIVATE dataTypes_lib)

# Tests for func_dataTypes
add_executable(dataTypes_tests tests/tests.cpp)
target_link_libraries(dataTypes_tests PRIVATE GTest::gtest_main dataTypes_lib)
include(GoogleTest)
gtest_discover_tests(dataTypes_tests)
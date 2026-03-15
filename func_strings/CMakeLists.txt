cmake_minimum_required(VERSION 3.22)
project(stringsPractice LANGUAGES CXX)

# set the directory where the bin will be build
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})

# define the library
set (LIB_SOURCES src/userEntry.cpp src/userEntry.h)
add_library(strings_lib ${LIB_SOURCES})

# define the executable 
add_executable(strings_run src/main.cpp)
target_link_libraries(strings_run PRIVATE strings_lib)
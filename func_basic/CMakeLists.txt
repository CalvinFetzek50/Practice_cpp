cmake_minimum_required(VERSION 3.22)
project(basic_functions)

# define the executable target 
add_executable(${PROJECT_NAME} src/main.cpp)
target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_20)
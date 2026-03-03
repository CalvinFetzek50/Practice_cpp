cmake_minimum_required(VERSION 3.22)
project(functions_with_headers)

# define the executable target 
add_executable(${PROJECT_NAME} src/main.cpp src/add.h src/add.cpp)
target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_20)
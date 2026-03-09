cmake_minimum_required(VERSION 3.22)
project(book_organizer_app LANGUAGES CXX)

# set the directory where the bin will build
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})

# define the library
set(LIB_SOURCES src/bookshelf.h src/bookshelf.cpp src/booksort.h src/booksort.cpp)
add_library(book_organizer_lib ${LIB_SOURCES})

# add include directories so other targets can find .h files
target_include_directories(book_organizer_lib PUBLIC src)

# define app executable
add_executable(book_organizer_run src/main.cpp)
target_link_libraries(book_organizer_run PRIVATE book_organizer_lib)

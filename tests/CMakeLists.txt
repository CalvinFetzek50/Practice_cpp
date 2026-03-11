cmake_minimum_required(VERSION 3.22)

# Tests for prj_book_organizer
add_executable(book_organizer_tests main.cpp)
target_link_libraries(book_organizer_tests PRIVATE book_organizer_lib)
add_test(NAME myTestSuite COMMAND book_organizer_tests)
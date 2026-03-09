/* A simple CMake program */

/* Run the following commands in the Command Pallete
CMAKE: Select a kit
CMAKE: Select variant -> debug
CMAKE: Configure
CMAKE: Build
CMAKE: Debug
*/

/* Reference for CMake CTEST: https://www.studyplan.dev/cmake/cmake-automated-testing-with-ctest*/

#include <iostream>
#include <cassert>
#include "booksort.h"

int main(int argc, const char **argv){
    std::cout << "Running book_organizer_tests..." << std::endl;

    // test 1: Basic alphabetical comparison
    assert(caseInsensitiveCompare("apple","banana") == true);

    std::cout << "All test passed." << std::endl;

    return EXIT_SUCCESS;
}
/* A simple CMake program */

/* Run the following commands in the terminal to add a build file:
    cmake -B build
    cd build
    cmake --build . --parallel
*/

/* Run the following commands in the Command Pallete
CMAKE: Select a kit
CMAKE: Select variant -> debug
CMAKE: Configure
CMAKE: Build
*/

#include <iostream>

int main(int argc, const char **argv){
    printf("Test message.\n");

    return EXIT_SUCCESS;
}
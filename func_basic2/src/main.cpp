#include "io.h"

int main (){

    // struct to store user entries
    twoValues userEntry {0, 0}; 

    // get two integer inputs from the user.
    userEntry = readNumbers();

    // add the two integer inputs write to terminal.
    writeNumbers(userEntry);

    return 0;
}
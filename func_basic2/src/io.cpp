#include "io.h"

twoValues readNumbers(){

    // define variables to store user input
    int enteredNumber1 {};
    int enteredNumber2 {};

    std::cout << "Enter the first number: ";
    std::cin >> enteredNumber1;

    std::cout << "Enter the second number: ";
    std::cin >> enteredNumber2;

    return {enteredNumber1, enteredNumber2};

}

void writeNumbers(twoValues userEntry){
    std::cout << "Addition of the two values are: ";
    std::cout << userEntry.firstValue + userEntry.secondValue;
}
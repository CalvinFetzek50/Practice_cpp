#include <stdio.h>
#include <iostream>


int main ()
{
    // ask the user to enter an integer, wiat for them to input an integer, then tell what 2 times that number is.
    int num1 {0};
    int num2 {0};
    std::cout << "Enter an integer: ";
    std::cin >> num1;
    std::cout << "Enter another integer: ";
    std::cin >> num2;
    std::cout << std::to_string(num1) + " + " + std::to_string(num1) +  " is " << num1 + num2 << "\n";
    std::cout << std::to_string(num1) + " - " + std::to_string(num1) +  " is " << num1 - num2 << "\n";
    return 0;
}
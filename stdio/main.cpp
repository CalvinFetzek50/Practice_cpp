#include <stdio.h>
#include <iostream>


int main ()
{
    // ask the user to enter an integer, wiat for them to input an integer, then tell what 2 times that number is.
    int num {0};
    std::cout << "Enter an integer: ";
    std::cin >> num;
    std::cout << "Double that number is " << num * 2 << "\n";

    return 0;
}
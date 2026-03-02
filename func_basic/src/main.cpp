#include <iostream>


// Prompts the user to enter a value as an input. 
// Returns the entered integer value.
int getInteger(){
    int enteredNum {};
    std::cout << "Enter a number to double: ";
    std::cin >> enteredNum;
    return enteredNum;
} 


int main(){
    std::cout << "Starting program.\n";
    std::cout << getInteger() * 2 << "\n"; 
    return 0;
}
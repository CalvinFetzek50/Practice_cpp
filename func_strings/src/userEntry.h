#ifndef USERENTRY
#define USERENTRY

#include <iostream>
#include <string>
#include <string_view>

// Prompt the user to enter his / her name
std::string getname();

// Prompt the user to enter his / her age
int getAge(std::string_view name);

// Compare the age and display message of the results
void compareAge();

#endif
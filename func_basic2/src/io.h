#ifndef IO
#define IO

#include <iostream>

struct twoValues{
    int firstValue;
    int secondValue; 
};

twoValues readNumbers();
void writeNumbers(twoValues userEntry);



#endif
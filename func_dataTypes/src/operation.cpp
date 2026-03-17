#include <iostream>
#include <limits>
#include <algorithm>
#include "operation.h"

double getValue(std::istream& in, std::ostream& out){

    double userEntry;

    while (true){
        out << "Enter a double value: ";
        if (in >> userEntry){
            // success
            break;
        }else{
            // failure
            out << "Invalid input. Please enter a number.\n";
            in.clear();
            in.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        }
    }

    return userEntry;

}

char getOperator(std::istream& in, std::ostream& out){

    char userOperator;

    while (true){
        out << "Enter +, -, *, or /: ";
        in >> userOperator;
        switch (userOperator){
            case '+':
            case '-':
            case '*':
            case '/':
                return userOperator;
            default:
            out << "Invalid operator. Please enter a valid one." << std::endl;
            in.clear();
            in.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            break;
        }
    }
}

double computeResult(double value1, double value2, char userOperator){
    switch (userOperator){
        case '+':
            return value1 + value2;
        case '-':
            return value1 - value2;
        case '*':
            return value1 * value2;
        case '/':
            return value1 / value2;
        default:
            std::cout << "Invalid inputs to the calculation." << std::endl;
            break; 
    }

    return 1.0;
}

void sort2(int& x, int& y){
    if (x > y){
        std::swap(x,y);
    }
}
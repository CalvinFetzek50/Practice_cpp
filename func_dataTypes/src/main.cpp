#include <iostream>
#include "operation.h"

// Practice problem 2 of https://www.learncpp.com/cpp-tutorial/chapter-4-summary-and-quiz/

int main(){
    double value1 = getValue(std::cin, std::cout);
    double value2 = getValue(std::cin, std::cout);
    char userOperator = getOperator(std::cin, std::cout);
    double result = computeResult(value1, value2, userOperator);

    std::cout << value1 << userOperator << value2 << " is " << result;

    return 0;
}
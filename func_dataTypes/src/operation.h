#ifndef OPERATION
#define OPERATION

// prompt user for input in floating point / int 
double getValue(std::istream& in, std::ostream& out);

// prompt user for operator 
char getOperator(std::istream& in, std::ostream& out);

// display results on terminal
double computeResult(double value1, double value2, char UserOperator);

#endif 
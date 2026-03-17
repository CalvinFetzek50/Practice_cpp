#include <gtest/gtest.h>
#include "../src/operation.h"

TEST(UserValueEntryTest, HandlesFloats){
    // TEST 1 
    // create local streams for testing
    std::istringstream mockInput("5.5\n");
    std::ostringstream mockOutput;

    // pass the mock streams directly to the function
    double result = getValue(mockInput, mockOutput);

    // Assertions
    EXPECT_DOUBLE_EQ(result, 5.5);

    mockInput.str("abc\n7.2\n");
    mockInput.clear();
    result = getValue(mockInput, mockOutput);

    // Assertions
    EXPECT_DOUBLE_EQ(result, 7.2);
}

TEST(UserOperatorEntryTest, HandlesVariousInputs){ 
    // create local streams for testing
    std::istringstream mockInput("*\n");
    std::ostringstream mockOutput;

    // pass the mock streams directly to the function
    char result = getOperator(mockInput, mockOutput);

    // Assertions
    EXPECT_EQ(result, '*');

    mockInput.str("a\n+\n");
    mockInput.clear();
    result = getOperator(mockInput, mockOutput);

    // Assertions
    EXPECT_EQ(result, '+');
}


TEST(CalculatorTest, HandleVariousOperations){ 
    // create local streams for testing
    double value1 = 5.0;
    double value2 = 4.0; 
    char userOperator = '+';

    // pass the mock streams directly to the function
    double result = computeResult(value1, value2,userOperator);

    // Assertions
    EXPECT_DOUBLE_EQ(result, 9.0);

    userOperator = '-';
    result = computeResult(value1, value2,userOperator);
    EXPECT_DOUBLE_EQ(result, 1.0);

    
    userOperator = '*';
    result = computeResult(value1, value2,userOperator);
    EXPECT_DOUBLE_EQ(result, 20.0);

    
    userOperator = '/';
    result = computeResult(value1, value2,userOperator);
    EXPECT_DOUBLE_EQ(result, 1.25);


}

TEST(swap2Test, HandleTwoOperations){
    int x {7};
    int y {5};

    sort2(x,y);
    EXPECT_EQ(x,5);
    
    sort2(x,y);
    EXPECT_EQ(x,5);
}
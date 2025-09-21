// libraries
#include <iostream>
#include <vector>
#include <cmath>

// classes headers
#include "Operand.h"
#include "Calculator.h"
#include "BasicCalculator.h"
#include "ScientificCalculator.h"


// header for test_cases
#include "test_cases.h"




void testOperandClass() {
    // Create Operand instances
    Operand op1(12.0);
    Operand op2(5.0);

    // Test addition
    Operand resultAdd = op1 + op2;
    std::cout << "Addition result: " << resultAdd.getValue() << std::endl;

    // Test subtraction
    Operand resultSub = op1 - op2;
    std::cout << "Subtraction result: " << resultSub.getValue() << std::endl;

    // Test multiplication
    Operand resultMul = op1 * op2;
    std::cout << "Multiplication result: " << resultMul.getValue() << std::endl;

    // Test division
    try {
        Operand resultDiv = op1 / op2;
        std::cout << "Division result: " << resultDiv.getValue() << std::endl;
    } catch (const std::runtime_error &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    // Test setting and getting value
    op1.setValue(20.0);
    std::cout << "Updated op1 value: " << op1.getValue() << std::endl;
}


//void testCalculatorClass()
//{
//    // Prepare test data
//    std::vector<Operand> testOperands = { Operand(1.0), Operand(2.0) };
//    std::vector<char> testOperators = { '+', '-' };
//
//    // Create a TestCalculator instance
//    Calculator testCal(testOperands, testOperators);
//
//    // print initialize result
//    for (Operand value : testCal.getOperandArr()) {
//        std::cout << value.getValue() << std::endl;
//    }
//    for (char  value : testCal.getOperatorArr()) {
//        std::cout << value << std::endl;
//    }
//}


void testBasicCalculatorClass(){


    // test case 1 data
    std::vector<Operand> testOperands = { Operand(10.0), Operand(2.0) , Operand(6.0), Operand(1),Operand(3)};
    std::vector<char> testOperators = { '+','/','-','*','s','s'};

    // test case 2 data: 6 + 2 - 1
    std::vector<Operand> testOperands2 = { Operand(6.0), Operand(2.0), Operand(1.0) };
    std::vector<char> testOperators2 = { '+', '-','r'};

    // Create a Basic Calculator instance
    BasicCalculator bcObj(testOperands, testOperators);

    // print initialized operands
    for (Operand value : bcObj.getOperandArr()) {
        std::cout << value.getValue() << std::endl;
    }
    // print initialized operators
    for (char  value : bcObj.getOperatorArr()) {
        std::cout << value << std::endl;
    }
    // test set/ get results
    bcObj.setResult();
    cout << bcObj.getResult().getValue() << endl;

    cout << "TEST CASE 2" << endl;



    // test case 2
    BasicCalculator bcObj2(testOperands2, testOperators2);
    for (Operand value : bcObj2.getOperandArr()) {
        std::cout << value.getValue() << std::endl;
    }
    for (char  value : bcObj2.getOperatorArr()) {
        std::cout << value << std::endl;
    }
    bcObj2.setResult();
    cout << bcObj2.getResult().getValue();
}

void testScientifcCalculatorClass()
{
    std::vector<Operand> testOperands = { Operand(21) };
    std::vector<char> testOperators = { 'c' };
    ScientificCalculator testSciCal(testOperands,testOperators);
    testSciCal.setResult();
    cout << testSciCal.getResult().getValue();

}

void testMenu() {
    //
    std::cout << "test case reference (using cpp built operators)"<< std::endl;

    std::cout << "BASIC"<< std::endl;
    // Addition
    std::cout << "Addition (5 + 5): " << 5 + 5 << std::endl;

    // Subtraction
    std::cout << "Subtraction (10.0 - 5): " << 10.0 - 5 << std::endl;

    // Multiplication
    std::cout << "Multiplication (34.2*0.5): " << 34.2*0.5 << std::endl;

    // Division
    std::cout << "Division (40 / 2): " << 40 / 2 << std::endl;

    // Square root
    std::cout << "Square root of 25: " << sqrt(25.0) << std::endl;

    // Square
    std::cout << "Square of 5: " << pow(5.0, 2) << std::endl;

    // combination
    std::cout << " Combination ( (5 + 6)/ 10.0 ) *  3  / 1.5  " << ( (5 + 6)/ 10.0 ) *  3 / 1.5    << std::endl;

    std::cout << "          "<< std::endl;
    std::cout << "SCIENTIFIC"<< std::endl;
    // Sine
    std::cout << "Sine of 30 degrees: " << sin(30) << std::endl;

    // Cosine
    std::cout << "Cosine of 50 degrees: " << cos(50) << std::endl;

    // Tangent
    std::cout << "Tangent of 90 degrees: " << tan(90) << std::endl;


    // combination
    std::cout << " Combination cos(sin(50)) " << cos(sin(50))   << std::endl;

}



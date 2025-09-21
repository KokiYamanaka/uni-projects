#include "BasicCalculator.h"
#include <iostream>
#include <cmath>


// Constructor
BasicCalculator::BasicCalculator(const vector<Operand>& p_operands, const vector<char>& p_operators)
: Calculator(p_operands,p_operators) {
}
// set result
void BasicCalculator::setResult()
{

    const std::vector<Operand>& operandsArr = getOperandArr(); // Get the vector of operands
    const std::vector<char>& operatorsArr = getOperatorArr(); // Get the vector of operators

    Operand result = operandsArr[0];
    int indexOperands = 1;

    // Accessing and processing array elements
    for (const auto& operators : operatorsArr) {
        switch(operators) {
            case '+':
                result = add(result, operandsArr[indexOperands]); // prior and post operands : result , operandsArr
                break;
            case '-':
                result = subtract(result, operandsArr[indexOperands]);
                break;
            case '*':
                result = multiply(result, operandsArr[indexOperands]);
                break;
            case '/':
                result = divide(result, operandsArr[indexOperands]);
                break;
            case 'r' :
                result  = squareRoot(result);
                break;
            case 's' :
                result  = square(result);
                break;
            default:
                std::cerr << "Unknown operator: " << operators << std::endl;
                break;
        } // end switch case

        indexOperands++; // shifts to next element in operandsArr
    } // end for loop
    this -> result   = result;
}


// get result
Operand BasicCalculator::getResult() const
{
    return result;
}
// Mathematical methods

// addition
Operand BasicCalculator::add( const Operand &op1,const Operand &op2 ) {
    return op1 + op2;
}

// subtraction
Operand BasicCalculator::subtract( const Operand &op1,const Operand &op2 ) {
    return op1 - op2;
}

// multiplication
Operand BasicCalculator::multiply( const Operand &op1,const Operand &op2 ) {
    return op1*op2;
}

// divide
Operand BasicCalculator::divide( const Operand &op1,const Operand &op2 ) {
    return op1/op2;
}

// square root
Operand BasicCalculator::squareRoot( const Operand &op1 ) {
    double result = std::sqrt( op1.getValue() );
    Operand temp(result);
    return temp;
}

// square
Operand BasicCalculator::square( const Operand &op1 ) {
    double result = std::pow(op1.getValue(), 2);
    Operand temp(result);
    return temp;
}




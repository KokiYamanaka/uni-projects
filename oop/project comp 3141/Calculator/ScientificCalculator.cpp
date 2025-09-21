#include "ScientificCalculator.h"
#include <iostream>
#include <cmath>
using namespace std;

// Constructor
ScientificCalculator::ScientificCalculator(const vector<Operand>& p_operands, const vector<char>& p_operators)
: Calculator(p_operands,p_operators) {
}

// trigonometric method
Operand ScientificCalculator:: sin( const Operand &op1 )
{
    double value = std::sin(op1.getValue());
    Operand temp(value);
    return temp;
}

Operand ScientificCalculator:: cos( const Operand &op1 )
{
    double value = std::cos(op1.getValue());
    Operand temp(value);
    return temp;
}
Operand ScientificCalculator:: tan( const Operand &op1 )
{
    double value = std::tan(op1.getValue());
    Operand temp(value);
    return temp;
}


// set/get methods
void ScientificCalculator::setResult()
{
    const std::vector<Operand>& operandsArr = getOperandArr(); // Get the vector of operands
    const std::vector<char>& operatorsArr = getOperatorArr(); // Get the vector of operators


    Operand result = operandsArr[0];
    int indexOperands = 1;

    // Accessing and processing array elements of
    for (const auto& operators : operatorsArr) {
        switch(operators) {
            case 's':
                result = sin(result); // prior and post operands : result , operandsArr
                break;
            case 'c':
                result = cos(result);
                break;
            case 't':
                result = tan(result);
                break;
            default:
                std::cerr << "Unknown operator: " << operators << std::endl;
                break;
        } // end switch case

        indexOperands++; // shifts to next element in operandsArr
    } // end for loop
    this -> result   = result;


}

Operand ScientificCalculator::getResult() const
{
    return this -> result;
}





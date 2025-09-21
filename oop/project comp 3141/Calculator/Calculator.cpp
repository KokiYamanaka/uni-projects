// base class
#include "Calculator.h"
using namespace std;

// Constructor
Calculator::Calculator(const vector<Operand> &p_operands, const vector<char> &p_operators):
// Member initializer lists
operand_arr(p_operands),operator_arr(p_operators),result(0.0)
{} // End of constructor

//

vector<Operand>  Calculator::getOperandArr() const
{
    return operand_arr;
}

vector<char> Calculator::getOperatorArr() const
{
    return operator_arr;
}

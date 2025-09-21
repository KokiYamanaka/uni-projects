
#ifndef CALCULATOR_H
#define CALCULATOR_H

#include "Operand.h"
#include <vector>

// using standard library directly
using namespace std;

class Calculator {
public:
    // Constructor
    Calculator( const vector<Operand> &, const vector<char> &);

    // pure virtual to set/get results
    virtual void   setResult() = 0;
    virtual Operand getResult() const = 0;

    vector<Operand> getOperandArr() const;
    vector<char> getOperatorArr() const;

private:
    vector<Operand> operand_arr;
    vector<char> operator_arr;
protected:
    Operand result;
};

#endif // CALCULATOR_H

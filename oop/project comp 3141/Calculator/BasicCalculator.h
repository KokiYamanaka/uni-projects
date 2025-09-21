#ifndef BASICCALCULATOR_H
#define BASICCALCULATOR_H


#include "Operand.h"
#include "Calculator.h"
#include <vector>
using namespace std;


class BasicCalculator : public Calculator {

public:
    // Constructor
    BasicCalculator( const vector<Operand> &, const vector<char> & );

    // override to set/get results
    void  setResult() override; // can modify object's internal state
    Operand getResult() const override;
private :
    Operand add( const Operand &, const Operand& );
    Operand subtract( const Operand &, const Operand& );
    Operand multiply( const Operand &, const Operand& );
    Operand divide( const Operand &, const Operand& );
    Operand squareRoot( const Operand & );
    Operand square( const Operand & );
};

#endif // BASICCALCULATOR_H



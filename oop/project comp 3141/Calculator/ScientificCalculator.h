
// file trigger fa
#ifndef SCIENTIFICCALCULATOR_H
#define SCIENTIFICCALCULATOR_H


// derived classes
#include "Operand.h"
#include "Calculator.h"
using namespace std;


class ScientificCalculator : public Calculator {

public:
    // Constructor
    ScientificCalculator( const vector<Operand> &, const vector<char> & );

    // override to set/get results
    void  setResult() override; // can modify object's internal state
    Operand getResult() const override;

private :
    // trigonometric methods
    Operand sin( const Operand & );
    Operand cos( const Operand & );
    Operand tan( const Operand & );
};



#endif // BASICCALCULATOR_H



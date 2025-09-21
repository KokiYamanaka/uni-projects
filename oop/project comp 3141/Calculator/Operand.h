#ifndef OPERAND_H
#define OPERAND_H

class Operand {
public:
    // Constructor
    Operand(const double &value);

    // Overloaded operators
    Operand operator+(const Operand &other) const;
    Operand operator-(const Operand &other) const;
    Operand operator*(const Operand &other) const;
    Operand operator/(const Operand &other) const;

    // Set and get methods
    void setValue(const double &p_value);
    double getValue() const;

private:
    double value = 0.0;
};

#endif // OPERAND_H

#include "Operand.h"
#include <stdexcept>  // Include this header to use std::runtime_error


// Constructor
Operand::Operand(const double &value) : value(value) {}

// Overloaded addition operator
Operand Operand::operator+(const Operand &other) const {
    return Operand(this->value + other.value);
}

// Overloaded subtraction operator
Operand Operand::operator-(const Operand &other) const {
    return Operand(this->value - other.value);
}

// Overloaded multiplication operator
Operand Operand::operator*(const Operand &other) const {
    return Operand(this->value * other.value);
}

// Overloaded division operator
Operand Operand::operator/(const Operand &other) const {
    if (other.value != 0) {
        return Operand(this->value / other.value);
    } else {
        throw std::runtime_error("Division by zero");
    }
}

// Set the value of the operand
void Operand::setValue(const double &p_value) {
    this->value = p_value;
}

// Get the value of the operand
double Operand::getValue() const {
    return this->value;
}

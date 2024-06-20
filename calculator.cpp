#include "calculator.h"
#include <iostream>

int workshop::Calculator::add(int a, int b) {
    return a + b; // not checking overflow!
}

int workshop::Calculator::subtract(int from, int value) {
    return from - value;
}

int workshop::Calculator::multiply(int op1, int op2) {
    int result = op1 * op2;
    std::cout << "Called multiply(" << op1 << "," << op2 << ") returns " << result;
    return result;
}

int workshop::Calculator::modulo(int op1, int op2) {
    return op1 % op2;
}

int workshop::Calculator::divide(int dividend, int divisor) {
    return dividend / divisor;
}

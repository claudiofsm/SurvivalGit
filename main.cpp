#include <iostream>
#include "calculator.h"

using namespace std;

int main(int argc, char** argv) {
    cout << "Welcome to simple calculator!" << endl;
    
    int op1, op2;
    cout << "Please enter the first operand: ";
    cin >> op1;
    cout << "Please enter the second operand: ";
    cin >> op2;

    workshop::Calculator calc;
    cout << op1 << " + " << op2 << " = " << calc.add(op1, op2) << endl;
    cout << op1 << " - " << op2 << " = " << calc.subtract(op1, op2) << endl;
    cout << op1 << " % " << op2 << " = " << calc.modulo(op1, op2) << endl;
    cout << op1 << " / " << op2 << " = " << calc.divide(op1, op2) << endl;

    return 0;
}
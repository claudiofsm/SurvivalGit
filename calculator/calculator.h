#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__

namespace workshop {
    class Calculator {
        public:
            int add(int a, int b);

            int subtract(int from, int value);

            int multiply(int op1, int op2);

            int modulo(int op1, int op2);
            
            int divide(int dividend, int divisor);
    };
}

#endif
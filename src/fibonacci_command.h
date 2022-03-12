//
// Created by Pablo Cabezas on 12-03-2022.
//

#ifndef PROGRAMMINGPATTERNS_FIBONACCI_COMMAND_H
#define PROGRAMMINGPATTERNS_FIBONACCI_COMMAND_H
#include "command_pattern.h"
#include "math_operation.h"

class FibonacciCommand : public CommandPattern {
private:
    int set_size = 0;
public:
    FibonacciCommand() {}
    virtual void execute()  {
        std::cout << "\nEnter the length of the collection desired: ";
        std::cin >> set_size;
        MathOperation *mathOperation;
        ArrayPattern *fibonacci = mathOperation->fibonacciCollection(set_size);
        fibonacci->PrintPattern();
    }
};

#endif //PROGRAMMINGPATTERNS_FIBONACCI_COMMAND_H

//
// Created by Pablo Cabezas on 12-03-2022.
//

#ifndef PROGRAMMINGPATTERNS_EXPONENTIAL_COMMAND_H
#define PROGRAMMINGPATTERNS_EXPONENTIAL_COMMAND_H

#include "command_pattern.h"
#include "math_operation.h"


class ExponentialCommand : public CommandPattern {
private:
    int set_size = 0;
public:
    ExponentialCommand() {}
    virtual void execute()  {
        std::cout << "\nEnter the length of the collection desired: ";
        std::cin >> set_size;
        MathOperation *mathOperation;
        ArrayPattern *fibonacci = mathOperation->exponentialCollection(set_size);
        fibonacci->PrintPattern();
    }
};



#endif //PROGRAMMINGPATTERNS_EXPONENTIAL_COMMAND_H

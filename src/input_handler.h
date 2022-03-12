//
// Created by Pablo Cabezas on 12-03-2022.
//

#ifndef PROGRAMMINGPATTERNS_INPUT_HANDLER_H
#define PROGRAMMINGPATTERNS_INPUT_HANDLER_H

#include "fibonacci_command.h"
#include "exponential_command.h"

class InputHandler {
public:
    CommandPattern* handleInput(char option, bool &executionBool);

private:
    CommandPattern* NumberOne;
    CommandPattern* NumberTwo;
};


#endif //PROGRAMMINGPATTERNS_INPUT_HANDLER_H

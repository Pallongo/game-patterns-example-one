//
// Created by Pablo Cabezas on 12-03-2022.
//

#include "input_handler.h"

CommandPattern* InputHandler::handleInput(char option, bool &executionBool) {
    if (option == '1')
    {
        FibonacciCommand *fb = new FibonacciCommand();
        NumberOne = fb;
        return NumberOne;
    }
    else if (option == '2')
    {
        ExponentialCommand *ec = new ExponentialCommand();
        NumberTwo = ec;
        return NumberTwo;
    }
    else if (option == '3')
    {
        executionBool = false;
        return nullptr;
    }
}

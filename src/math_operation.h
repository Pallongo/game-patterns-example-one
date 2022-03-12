//
// Created by Pablo Cabezas on 12-03-2022.
//

#ifndef PROGRAMMINGPATTERNS_MATH_OPERATION_H
#define PROGRAMMINGPATTERNS_MATH_OPERATION_H

//We need to include our linked list implementation for collection display
#include "array_pattern.h"
#include <math.h>

class MathOperation {

private:
    //If usingRadians is false, then our geometric operations will be calculated using degrees.
    bool usingRadians = false;
    MathOperation() {}
public:
    static MathOperation& getInstance() {
        static MathOperation instance;
        return instance;
    }

    MathOperation(MathOperation const&) = delete;
    void operator=(MathOperation const&) = delete;

    ArrayPattern *fibonacciCollection(int set_size);
    ArrayPattern *exponentialCollection(int set_size);

};

#endif //PROGRAMMINGPATTERNS_MATH_OPERATION_H

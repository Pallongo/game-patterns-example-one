//
// Created by Pablo Cabezas on 12-03-2022.
//
#include "math_operation.h"

ArrayPattern* MathOperation::fibonacciCollection(int set_size) {
    ArrayPattern *collection = new ArrayPattern();
    for (int i = 0; i < set_size; i++)
    {
        if (i < 2)
        {
            collection->AddValue(1);
        }
        else {
            int x = collection->tail->getValue() + collection->tail->last->getValue();
            collection->AddValue(x);
        }
    }

    return collection;
}

ArrayPattern *MathOperation::exponentialCollection(int set_size) {
    ArrayPattern *collection = new ArrayPattern();
    int base = 2;
    for (int i = 0; i < set_size; i++)
    {
        collection->AddValue(std::pow(base, i));
    }

    return collection;
}


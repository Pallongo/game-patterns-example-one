//
// Created by Pablo Cabezas on 12-03-2022.
//

#ifndef PROGRAMMINGPATTERNS_ARRAY_PATTERN_H
#define PROGRAMMINGPATTERNS_ARRAY_PATTERN_H
#include "array_value.h"
#include <iostream>
#include <string>

//Linked list implementation
class ArrayPattern {

private:
    ArrayValue* head = nullptr;
public:
    ArrayPattern() {}
    ArrayValue* tail = nullptr;

    //Add next number to the pattern list
    void AddValue(int number);
    void PrintPattern();
};

#endif //PROGRAMMINGPATTERNS_ARRAY_PATTERN_H

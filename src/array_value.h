//
// Created by Pablo Cabezas on 12-03-2022.
//

#ifndef PROGRAMMINGPATTERNS_ARRAY_VALUE_H
#define PROGRAMMINGPATTERNS_ARRAY_VALUE_H

class ArrayValue {
private:
    int value;


public:
    //Explicit keyword for single-parameter constructor
    explicit ArrayValue(int x)
    {
        value = x;
        next = nullptr;
    }

    //We store next ArrayValue pointer for linked list implementation
    ArrayValue* next = nullptr;
    ArrayValue* last = nullptr;

    //Get value of array object
    int getValue();

};

#endif //PROGRAMMINGPATTERNS_ARRAY_VALUE_H

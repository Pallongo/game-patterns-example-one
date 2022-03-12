//
// Created by Pablo Cabezas on 12-03-2022.
//
#include "array_pattern.h"

void ArrayPattern::AddValue(int number) {
    ArrayValue *pointerToValue = new ArrayValue(number);

    //Get if head is null
    if (head == nullptr) {
        head = pointerToValue;
        tail = pointerToValue;
    } else {
        tail->next = pointerToValue;
        pointerToValue->last = tail;
        tail = tail->next;
    }
}

void ArrayPattern::PrintPattern() {
    std::cout << "\n { ";
    ArrayValue *current = this->head;

    if (current == nullptr)
    {
        std::cout << "Empty collection.\n";
        return;
    }

    while(current != nullptr)
    {
        std::cout << std::to_string(current->getValue()) << " , ";
        current = current->next;
    }

    std::cout << " }\n\n";

}


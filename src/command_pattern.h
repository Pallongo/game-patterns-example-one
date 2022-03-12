//
// Created by Pablo Cabezas on 12-03-2022.
//

#ifndef PROGRAMMINGPATTERNS_COMMAND_PATTERN_H
#define PROGRAMMINGPATTERNS_COMMAND_PATTERN_H


class CommandPattern {
public:
    virtual ~CommandPattern() = default;
    virtual void execute() = 0;
};


#endif //PROGRAMMINGPATTERNS_COMMAND_PATTERN_H

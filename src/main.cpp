#include <iostream>
#include "input_handler.h"

int main() {

    //Declaration of the input handler
    InputHandler *inputHandler = new InputHandler();

    //Bool for keeping the program execution up
    bool executing = true;

    while(executing)
    {
        std::cout << "Enter option (1 for fibonacci set, 2 for exponential set, 3 for exiting the application):  ";
        char optionSelected;
        std::cin >> optionSelected;
        CommandPattern *command = inputHandler->handleInput(optionSelected, executing);
        if(command != nullptr)
        {
            command->execute();
        }
    }

    return 0;
}

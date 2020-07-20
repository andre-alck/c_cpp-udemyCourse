#include <iostream>
#include "animal.h"

int main(void)
{
    std::cout << "Starting program..." << std::endl;

    {
        Animal animal;

        animal.makeHungry();
        animal.isHungry();
    }

    std::cout << "Ending program..." << std::endl;
    return 0;
}

/*
Note: the escope of the object is until the brackets ends.

e.g.:
    {
        Animal animal;

        animal.makeHungry();
    }
    animal.isHungry(); //error!!!
*/
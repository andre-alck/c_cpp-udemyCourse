#include <iostream>
#include "animal.h"

void Animal::isHungry(void)
{
    if (hungry)
    {
        std::cout << "~feeding animal~" << std::endl;
    }
    else
    {
        std::cout << "~animal not hungry~" << std::endl;
    }
}

void Animal::makeHungry(void)
{
    hungry = true;
}

void Animal::makeNotHungry(void)
{
    hungry = false;
}
/*
Author: André S. A. de Carvalho
*/

#include <iostream>
#include "headerexample.h"

int main(void)
{
    /* There is no need to prototype the function, since the headerexample.h is included and already does that. */
    sayHi();

    return 0;
}

void sayHi(void)
{
    std::cout << "Hi!" << std::endl;
}
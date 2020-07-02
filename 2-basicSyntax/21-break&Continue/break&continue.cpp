/*
Author: André S. A. de Carvalho
*/

#include <iostream>

int main(void)
{
    std::cout << "Break example: " << std::endl;
    for (int i = 0; i < 10; i++)
    {
        std::cout << "i is: " << i << std::endl;

        if (i == 3)
        {
            /*
            Escapes the loop if the condition is true.
            */
            break;
        }
    }

    std::cout << std::endl;

    std::cout << "Continue example: " << std::endl;
    for (int i = 0; i < 10; i++)
    {
        std::cout << "i is: " << i << std::endl;

        if (i == 3)
        {
            /*
            Ignores the following lines of the loop while the condition is true.
            */
            continue;
        }
        std::cout << "on the third iteration i'm not gonna see this." << std::endl;
    }

    std::cout << "Program quitting..." << std::endl;
}
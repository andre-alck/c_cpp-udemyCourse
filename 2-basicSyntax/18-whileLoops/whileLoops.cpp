/*
Author: André S. A. de Carvalho
*/

#include <iostream>

int main(void)
{
    /*
    When the while loop ends, the i value will be 5.
    */
    int i = 0;
    while (i < 5)
    {
        std::cout << "i value: " << i << "; i still < 5" << std::endl;
        i++;
    }

    std::cout << "i = " << i << std::endl;

    std::cout << "Program quitting..." << std::endl;
    return 0;
}
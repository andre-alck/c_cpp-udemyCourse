/*
Author: André S. A. de Carvalho
*/

#include <iostream>
#include <iomanip>

int main(void)
{
    /*
    Wrong way:
    */
    std::cout << "wrong way: " << std::endl;
    float value1 = 1.1;

    if (value1 == 1.1)
    {
        std::cout << "equals" << std::endl;
    }
    else
    {
        std::cout << "not equal" << std::endl;
    }

    /*
    The float type should not be compared, since it's last digits are trash. 
    */
    std::cout << "complete value: " << std::flush;
    std::cout << std::fixed << std::setprecision(20) << value1 << std::endl;

    /*
    Right way:
    */
    std::cout << "right way: " << std::endl;
    float value2 = 2.2;

    if (value2 < 2.21)
    {
        std::cout << "equals" << std::endl;
    }
    else
    {
        std::cout << "not equals" << std::endl;
    }

    return 0;
}
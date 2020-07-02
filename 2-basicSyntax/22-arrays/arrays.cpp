/*
Author: André S. A. de Carvalho
*/

#include <iostream>

#define max 10

int main(void)
{
    /*
    Arrays can storage various types of information, such as integers, floats, doubles, strings, etc..
    */

    int arrInt[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sizeArrInt = sizeof(arrInt) / sizeof(arrInt[0]);

    float arrFloat[] = {0.1, 1.2, 2.3, 3.4, 4.5, 5.6, 6.7, 7.8, 8.9, 9.9};
    int sizeArrFloat = sizeof(arrFloat) / sizeof(arrFloat[0]);

    std::cout << "array of integers: " << std::endl;
    for (int i = 0; i < sizeArrInt; i++)
    {
        std::cout << "arrInt[" << i << "] = " << arrInt[i] << std::endl;
    }

    /*********************/
    std::cout << std::endl;
    /*********************/

    std::cout << "array of floats: " << std::endl;
    for (int i = 0; i < sizeArrFloat; i++)
    {
        std::cout << "arrFloat[" << i << "] = " << arrFloat[i] << std::endl;
    }
    return 0;
}

/*
Notes:
    • When the values inside the array are not specified, they will be garbage.

    • To start the array with all elements equals to 0, do:
        a. int arrExample[] = {};
*/
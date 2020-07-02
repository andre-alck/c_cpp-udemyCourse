/*
Author: André S. A. de Carvalho
*/

#include <iostream>

int main(void)
{
    int values[] = {5, 45, 8, 135, 2998};
    int sizeValues = sizeof(values) / sizeof(values[0]);

    for (int i = 0; i < sizeValues; i++)
    {
        /*The for loop will repeat while i < the size of the values[] array.*/
        std::cout << values[i] << " " << std::flush;
    }

    return 0;
}
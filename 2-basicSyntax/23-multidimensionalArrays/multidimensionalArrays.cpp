/*
Author: André S. A. de Carvalho
*/

#include <iostream>
#include <cstring>

int main(void)
{
    std::string foods[2][3] = {
        {"apple", "banana", "grape"},
        {"avocado", "blueberry", "orange"}};
    /*
    x y y y
    x y y y
    2 rows, 3 columns.
    foods[0][1] = first row, second column = banana.
    */

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << foods[i][j] << " " << std::flush;
        }

        std::cout << std::endl;
    }

    return 0;
}
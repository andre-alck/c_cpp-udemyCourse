/*
Author: André S. A. de Carvalho
*/

#include <iostream>
#include <cstring>

int main(void)
{
    std::string words[][3] = {
        {"pencil", "mouse", "floor"},
        {"headphone", "keyboard", "mousepad"}

    };

    int rows = sizeof(words) / sizeof(words[0]);          /*144 : 72 = 2 rows.*/
    int columns = sizeof(words[0]) / sizeof(std::string); /*72 / 24 = 3 columns.*/

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cout << words[i][j] << std::endl;
        }
    }

    return 0;
}
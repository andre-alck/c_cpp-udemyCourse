/*
Author: André S. A. de Carvalho
Simple code to explain parameters in functions.
It's not bug free.
*/

#include <iostream>

void displayMenu(void);
int getInput(void);
void calculateByInput(int input);

int main(void)
{
    displayMenu();
    int input = getInput();
    calculateByInput(input);

    return 0;
}

void displayMenu(void)
{
    std::cout << "Options:" << std::endl;
    std::cout << "1.\tAdd + 10" << std::endl;
    std::cout << "2.\tSubtract -10" << std::endl;
    std::cout << "3.\tMultiply by 10" << std::endl;
    std::cout << "4.\tDivide by 10" << std::endl;
}

int getInput(void)
{
    int input;
    std::cout << "Insert option: " << std::flush;
    std::cin >> input;

    return input;
}

void calculateByInput(int input)
{
    float value = 1;
    switch (input)
    {
    case 1:
        value += 10;
        break;

    case 2:
        value -= 10;
        break;

    case 3:
        value *= 10;
        break;

    case 4:
        value /= 10;
        break;
    }

    std::cout << "Result: " << value << std::endl;
}

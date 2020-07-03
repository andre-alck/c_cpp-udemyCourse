/*
Author: André S. A. de Carvalho
*/

#include <iostream>
#include <cstring>

void voidFunctionNoParameter(void);
void voidFunctionParameter(std::string name);
int intFunctionNoParameter(void);
int intFunctionParameter(int x, int y);

int main(void)
{

    voidFunctionNoParameter();
    std::cout << std::endl;

    voidFunctionParameter("Andre");
    std::cout << std::endl;

    intFunctionNoParameter();
    std::cout << std::endl;

    int n1 = 5, n2 = 6;
    intFunctionParameter(n1, n2);

    return 0;
}

void voidFunctionNoParameter(void)
{
    std::cout << "This is a function which will not return anything and has no parameters!" << std::endl;
}

void voidFunctionParameter(std::string name)
{
    std::cout << "Hi, " << name << "! This is a function with a paratemeter and no return." << std::endl;
}

int intFunctionNoParameter(void)
{
    int value = 5;
    std::cout << "This is a function which will return something and has no parameters." << std::endl;
    std::cout << "This function is returning: " << value << std::endl;
    return value;
}

int intFunctionParameter(int x, int y)
{
    std::cout << "This is a function which will return something and has 2 parameters." << std::endl;
    std::cout << "This function is returning: " << x + y << std::endl;
    return x + y;
}
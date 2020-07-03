/*
Author: André S. A. de Carvalho
*/

#include <iostream>

void clearConsole(void);

int main(void)
{
    while (true)
    {
        double n1, n2;
        std::cout << "Insert the first number: " << std::flush;
        std::cin >> n1;
        std::cout << "Insert the second number: " << std::flush;
        std::cin >> n2;

        std::cout << std::endl;

        std::cout << "Operators:" << std::endl;
        std::cout << "Insert '+' to sum." << std::endl;
        std::cout << "Insert '-' to subtract." << std::endl;
        std::cout << "Insert '*' to multiply." << std::endl;
        std::cout << "Insert '/' to  divide." << std::endl;

        char userOperatorChoice;
        std::cout << "Insert your choice: " << std::flush;
        std::cin >> userOperatorChoice;

        double result;
        switch (userOperatorChoice)
        {
        case '+':
            result = n1 + n2;
            break;

        case '-':
            result = n1 - n2;
            break;

        case '*':
            result = n1 * n2;
            break;

        case '/':
            result = n1 / n2;
            break;

        default:
            std::cout << "Operator not found." << std::endl;
            std::cout << "Quitting program..." << std::endl;
            return 0;
        }

        std::cout << std::endl;
        std::cout << "Result: " << result << std::endl;
        std::cout << std::endl;

        std::cout << "Insert 0 to quit or any number to run again: " << std::flush;
        int repeat;
        std::cin >> repeat;

        if (repeat != 0)
        {
            clearConsole();
            continue;
        }
        else
        {
            std::cout << std::endl;
            break;
        }
    }

    std::cout << "Quitting program...";
    return 0;
}

void clearConsole(void)
{
#ifdef _WIN32
    system("cls");
#else
    /*
    Assume unix based system.
    */
    system("clear");
#endif
}
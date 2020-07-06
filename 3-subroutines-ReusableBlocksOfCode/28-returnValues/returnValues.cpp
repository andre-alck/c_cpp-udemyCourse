/*
Author: André S. A. de Carvalho
Modified code from lesson 26-switch.
*/

#include <iostream>

void clearConsole(void);
void showMenu(void);
char getUserOperator(void);
double calculateByChoice(void);

double n1, n2;
int main(void)
{
    while (true)
    {
        /*I don't know how to return multiple values, so I didn't create a function to ask the numbers above.*/
        std::cout << "Insert the first number: " << std::flush;
        std::cin >> n1;
        std::cout << "Insert the second number: " << std::flush;
        std::cin >> n2;
        std::cout << std::endl;

        showMenu();

        /*
        It is not necessary to call the getUserOperator function, because inside the calculateByChoice function there is a variable already calling it. If the function gets callled twice(or more), there will be bugs!
        */
        double result = calculateByChoice();

        std::cout << std::endl;
        std::cout << "Result: " << result << std::endl;
        std::cout << std::endl;

        /*I didn't create a function for the run again loop, because the break and continue would not work, since they aren't inside a loop!*/
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

void showMenu(void)
{
    std::cout << "Operators:" << std::endl;
    std::cout << "Insert '+' to sum." << std::endl;
    std::cout << "Insert '-' to subtract." << std::endl;
    std::cout << "Insert '*' to multiply." << std::endl;
    std::cout << "Insert '/' to  divide." << std::endl;
}

char getUserOperator(void)
{
    char userOperatorChoice;
    std::cout << "Insert your choice: " << std::flush;
    std::cin >> userOperatorChoice;

    return userOperatorChoice;
}

double calculateByChoice()
{
    double result;

    char userOperatorChoice = getUserOperator();
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

    return result;
}
/*
Author: André S. A. de Carvalho
*/

#include <iostream>
#include <climits>

int main(void)
{
    std::cout << "Conditions: " << std::endl;
    std::cout << "1.\tN1 == N2" << std::endl;
    std::cout << "2.\tN1 == N2 + 10" << std::endl;
    std::cout << "3.\tN1 - N2 == 20" << std::endl;
    std::cout << "4.\tN1 % N2 == 0" << std::endl;
    std::cout << "5.\tN1 * 10 == N2" << std::endl;

    int N1, N2;

    std::cout << "Insert the value of N1: " << std::flush;
    std::cin >> N1;

    std::cout << "Insert the value of N2: " << std::flush;
    std::cin >> N2;

    /*
    The condition is correct, but if the user input a number < INT_MIN || > INT_MAX; the program will not run correctly.
    */
    if (N1 < INT_MIN || N1 > INT_MAX || N2 < INT_MIN || N2 > INT_MAX)
    {
        while (N1 < INT_MIN || N1 > INT_MAX || N2 < INT_MIN || N2 > INT_MAX)
        {
            std::cout << "Insert the value of N1: " << std::flush;
            std::cin >> N1;

            std::cout << "Insert the value of N2: " << std::flush;
            std::cin >> N2;
        }
    }

    std::cout << std::endl;

    if (N1 == N2)
    {
        std::cout << "Condition 1: true" << std::endl;
    }
    else
    {
        std::cout << "Condition 1: false" << std::endl;
    }

    if (N1 == N2 + 10)
    {
        std::cout << "Condition 2: true" << std::endl;
    }
    else
    {
        std::cout << "Condition 2: false" << std::endl;
    }

    if (N1 - N2 == 20)
    {
        std::cout << "Condition 3: true" << std::endl;
    }
    else
    {
        std::cout << "Condition 3: false" << std::endl;
    }

    if (N1 % N2 == 0)
    {
        std::cout << "Condition 4: true" << std::endl;
    }
    else
    {
        std::cout << "Condition 4: false" << std::endl;
    }

    if (N1 * 10 == N2)
    {
        std::cout << "Condition 5: true" << std::endl;
    }
    else
    {
        std::cout << "Condition 5: false" << std::endl;
    }

    return 0;
}

/*
!= different
== equals to

&& and
|| or

> greater
>= greater than

< less
<= less than
*/
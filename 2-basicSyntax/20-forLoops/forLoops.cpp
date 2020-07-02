#include <iostream>
#include <cstring>

int main(void)
{
    std::string numbers[] = {
        "zero", "one", "two", "three", "four", "five", "size", "seven", "eight", "nine"};

    const int numbersSize = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < numbersSize; i++)
    {
        std::cout << i << ". " << numbers[i] << std::endl;
    }

    return 0;
}
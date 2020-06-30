/*
Author: André S. A. de Carvalho
*/

#include <iostream>
#include <cstring>

int main(void)
{
    const std::string password = "p@ssw0rd";
    std::string userPassword;

    do
    {
        std::cout << "Insert the password: " << std::flush;
        getline(std::cin, userPassword);

        if (userPassword != password)
        {
            std::cout << "Acess denied." << std::endl;
        }
    } while (userPassword != password);

    std::cout << "This is some confidencial information that only a person who knows the password should be able to see." << std::endl;

    std::cout << "Program quitting..." << std::endl;
    return 0;
}
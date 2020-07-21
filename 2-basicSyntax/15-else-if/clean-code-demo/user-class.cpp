#include <iostream>
#include <string>
#include "user-class.h"

User::User() {
	std::string username = "standard";
	std::string password = "password";
}

void User::displayUsername (void) {
	std::cout << username << std::endl;
}

void User::changeUsername (void) {
	std::string userPassword;

	std::cout << "Insert the password: " << std::flush;
	getline(std::cin, userPassword);

	while (userPassword != password) {
		std::cout << "Wrong password. Try again: " << std::flush;
		getline(std::cin, userPassword);
	}

	std::cout << "Insert new username: " << std::flush;
	getline(std::cin, username);
}


void User::changePassword (void) {
	std::string userPassword;

	std::cout << "Insert the password: " << std::flush;
	getline(std::cin, userPassword);

	while (userPassword != password) {
		std::cout << "Wrong password. Try again: " << std::flush;
		getline(std::cin, userPassword);
	}

	std::cout << "Insert new password: " << std::flush;
	getline(std::cin, userPassword);
};

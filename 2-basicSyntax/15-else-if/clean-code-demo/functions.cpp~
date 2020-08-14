#include <iostream>
#include "user-class.h"

void displayMenu(void) {
	std::cout << "1.\tSee current username." << std::endl;
	std::cout << "2.\tChange username." << std::endl;
	std::cout << "3.\tChange password." << std::endl;
}

int getUserChoice(void) {
	std::cout << "Enter a number to select a choice: " << std::flush;

	int getUserChoice;
	std::cin >> getUserChoice;
	std::cin.ignore();

	return getUserChoice;
}

void checkChoice(int getUserChoice) {
	User user;

	switch (getUserChoice) {
	case 1:
		user.displayUsername();
		break;

	case 2:
		user.changeUsername();
		break;

	case 3:
		user.changePassword();
		break;

	default:
		std::cout << "Invalid option." << std::endl;
		break;
	}
}

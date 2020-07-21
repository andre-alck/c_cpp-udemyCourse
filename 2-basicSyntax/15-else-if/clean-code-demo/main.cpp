#include <iostream>
#include <string>
#include "user-class.h"
#include "functions.h"

int main(void) {
	displayMenu();

	int userChoice;
	userChoice = getUserChoice();
	checkChoice(userChoice);

	return 0;
}

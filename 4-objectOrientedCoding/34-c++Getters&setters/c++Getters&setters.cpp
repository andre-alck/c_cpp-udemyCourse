#include <iostream>
#include "person.h"

int main (void) {
	Person person;

	std::cout << person.toString() << std::endl;

	person.setName("Rodrigo");
	std::cout << person.toString() << std::endl;

	return 0;
}

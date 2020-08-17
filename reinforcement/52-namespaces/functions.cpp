#include "person.hpp"

namespace asac {
	void Person::changeName(std::string name) {
		this->name = name;
	}

	void Person::changeAge(int age) {
		this-> age = age;
	}

	void Person::displayName(void) {
		std::cout << name << std::endl;
	}

	void Person::displayAge(void) {
		std::cout << age << std::endl;
	}
}

asac::Person* createObject(void) {
	asac::Person* person = new asac::Person;

	return person;
}

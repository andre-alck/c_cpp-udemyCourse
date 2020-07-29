#include <iostream>
#include <string>

class Person {
	private:
		std::string name;

	public:
		void setName(std::string name);
		void speak(void) const;
};

void Person::setName(std::string name) {
	this->name = name;
}

void Person::speak(void) const { //read-only?
	std::cout << "Hello! My name is: " << name << std::endl;
}

int main(void) {
	Person person;

	person.setName("User");
	person.speak();

	/************************************/

	int number = 500;
	const int* ptrNumber = &number;
	std::cout << ptrNumber << std::endl;

	int number2 = 200;
	ptrNumber = &number2;

	std::cout << ptrNumber << std::endl;

	return 0;
}

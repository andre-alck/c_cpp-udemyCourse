#include "person.hpp"

int main(void) {
	asac::Person* p1 = createObject();
	p1->changeName("p1");
	p1->changeAge(10);
	p1->displayName();
	p1->displayAge();

	asac::Person p2;
	p2.changeName("p2");
	p2.changeAge(17);
	p2.displayName();
	p2.displayAge();

	return 0;
}

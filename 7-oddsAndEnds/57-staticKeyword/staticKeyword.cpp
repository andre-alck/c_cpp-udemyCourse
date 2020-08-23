#include <iostream>

#define LOG(x) std::cout << x << std::endl;
#define NEW_LINE std::cout << std::endl;

class Foo {
	private:
		int id;
		static int count;

	public:
		Foo(void);

		static int const MAX = 100; /*Why create another public section for this?*/

		static void showInfo(void);
		int getId(void);
};

void Foo::showInfo(void) {
	LOG(count)
}

Foo::Foo(void) {
	LOG("Object created.");
	id = ++count; /*IMPORTANT!*/
}

int Foo::getId(void) {
	return id;
}

int Foo::count = 0;

int main(void) {
	Foo* foo = new Foo[4];
	NEW_LINE;

	LOG("Logging MAX:");
	LOG(Foo::MAX);
	LOG(foo->MAX);
	NEW_LINE;

	LOG("Logging INFO:");
	Foo::showInfo();
	foo->showInfo();
	NEW_LINE;

	LOG("Logging ID:");
	LOG(foo[3].getId());
	NEW_LINE;

	return 0;
}

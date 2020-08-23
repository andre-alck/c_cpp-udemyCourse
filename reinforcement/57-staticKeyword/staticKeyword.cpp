#include <iostream>

#define LOG(x) std::cout << x << std::endl;
#define NEW_LINE std::cout << std::endl;
#define MAX 10

void function1(void) {
	static int i;
	LOG(i);
	i++;
}

class Foo {
	public:
		static int i;

		Foo(void) {
			LOG("Foo object created.");
		}
		~Foo(void) {
			LOG("Foo object destroyed.");
		}
};
int Foo::i = 1;

class Bar {
	public:
		Bar(void) {
			LOG("Bar object created.");
		}
		~Bar(void) {
			LOG("Bar object destroyed.");
		}
};

class Class_with_method {
	public:
	static void greetings(void) {
		LOG("hi!");
	}
};
			
int main(void) {
	LOG("First part.");
	for(int i = 0; i < MAX; i++ ) {
		function1();
	}

	NEW_LINE;

	LOG("Second part.");
	Foo foo;
	LOG(foo.i);

	NEW_LINE;

	LOG("Third part.");
	int x = 10;
	if(x != 0) {
	static Bar bar;
	}

	NEW_LINE;

	LOG("Fourth part.");
	Class_with_method::greetings();

	NEW_LINE;

	LOG("END");
	return 0;
}

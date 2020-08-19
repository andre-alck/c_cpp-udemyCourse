#include <iostream>

class Person {
	public:
		void speak(void);
};

void Person::speak(void) {
	std::cout << "~speaking" << std::endl;
}

class Joao: public Person {
	public:
		void eat(void);
};

void Joao::eat(void) {
	std::cout << "~eating" << std::endl;
}

class JoaoQualquer: public Joao {
	public:
		void eatAny(void);
};

void JoaoQualquer::eatAny(void) {
	std::cout << "~eating any" << std::endl;
}

int main(void) {
	Person p1;
	p1.speak();

	Joao joao;
	joao.speak();
	joao.eat();

	JoaoQualquer joaoqq;
	joaoqq.speak();
	joaoqq.eat();
	joaoqq.eatAny();

	return 0;
}

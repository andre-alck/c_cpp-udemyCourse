#include <iostream>

class Names {
	private:
		std::string name;

	public:
		void setName(char name);
		void displayName(void);
		Names(void);
		~Names(void);
};

void Names::setName(char name) {
	this->name = name;
}

void Names::displayName(void) {
	std::cout << name << std::endl;
}

Names::Names(void) {
	name = "undefined";

	std::cout << "Object created." << std::endl;
}

Names::~Names(void) {
	std::cout << "Object destroyed." << std::endl;
}

int main(void) {
	Names names[26];

	char ch = 'a';
	for(int i = 0; i < 26; i++) {
		names[i].setName(ch);
		ch++;
	}

	for(int i = 0; i < 26; i++) {
		names[i].displayName();
	}

	return 0;
}

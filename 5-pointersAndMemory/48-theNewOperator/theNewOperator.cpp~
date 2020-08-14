#include <iostream>

class Player {
	private:
		std::string name;

	public:
		Player(void);
		Player(const Player& otherConstructor);
		~Player(void);
		void setName(std::string name);
		void getName(void);
};

Player::Player(void) {
	std::cout << "Object created." << std::endl;
}

Player::Player(const Player& otherConstructor): name(otherConstructor.name) { /*if the object is created by copying, this constructor will be executed.*/
	std::cout << "Constructor created by copying." << std::endl;
}

Player::~Player(void) {
	std::cout << "Object destroyed." << std::endl;
}

void Player::setName(std::string name) {
	this-> name = name;
}

void Player::getName(void) {
	std::cout << "Name: " << name << std::endl;
}

int main(void) {
	Player *p1 = new Player();
	p1->setName("p1");
	p1->getName();
	delete p1;

	return 0;
}

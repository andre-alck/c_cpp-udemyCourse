#include <iostream>

class Object {
	private:
		int number;

	public:
		Object(void);
		Object(const Object& other);
		~Object(void);

		void setNumber(int number);
		void displayNumber(void) const;
};

Object::Object(void) {
	std::cout << "Object created." << std::endl;
	number = 0;
}

Object::Object(const Object& other): number(other.number) {
	std::cout << "Object created by copying." << std::endl;
}

Object::~Object(void) {
	std::cout << "Object destroyed." << std::endl;
}

void Object::setNumber(int number) {
	this->number = number;
}

void Object::displayNumber(void) const {
	std::cout << number << std::endl;
}

Object* createObject(void) {
	Object* object = new Object();

	return object;
}

void deleteObject(Object* obj) {
	delete obj;
}

int main(void) {
	Object *obj = createObject();

	obj->displayNumber();
	obj->setNumber(100);
	obj->displayNumber();

	deleteObject(obj);

	return 0;
}

/*
 * how can I create an object by copying using the new operator?
 */

#include <iostream>
#include <string>

class Person {
    private:
        std::string name;
        int age;

    public:
        Person();
        Person(std::string name, int age);
        ~Person();

        void displayMemoryLocation(void);
};

Person::Person() {
    std::cout << "Object created." << std::endl;

    name = "undefined";
    age = 0;
}

Person::Person(std::string name, int age) {
    std::cout << "Object created." << std::endl;

    this->name = name;
    this->age = age;
}

Person::~Person() {
    std::cout << "Object destroyed." << std::endl;
}

void Person::displayMemoryLocation(void) {
    std::cout << "Memory location of name: " << &name << std::endl;
    std::cout << "Memory location of age: " << &age << std::endl;
}

int main(void) {
    Person personA;
    std::cout << "personA: " << std::endl;
    personA.displayMemoryLocation();

    Person personB("Daniel Demo", 45);
    std::cout << "personB: " << std::endl;
    personB.displayMemoryLocation();

    return 0;
}

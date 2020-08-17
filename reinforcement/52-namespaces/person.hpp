#ifndef PERSON_HPP
#define PERSON_HPP

#include <iostream>
#include <string>

namespace asac {
	class Person {
		private:
			std::string name = "Undefined";
			int age = 0;

		public:
			void changeName(std::string name);
			void changeAge(int age);

			void displayAge(void);
			void displayName(void);
	};
}

asac::Person* createObject(void);

#endif

#include <iostream>

class Machine {
	private:
		int code_number;

	public:
		Machine(void) {
			code_number = 0; /*isso seria o this->id*/
			std::cout << "Machine created." << std::endl;
		}

		void info(void) {
			std::cout << code_number << std::endl;
		}

		Machine(int new_code_number): code_number(new_code_number) {}
		Machine(int new_code_number) {
			this->code_number = new_code_number;
		}
};

class Computer: public Machine {
	public:
		Computer(void) {
			std::cout << "Computer created." << std::endl;
		}

		Computer(int number): Machine(number) {}
};

class Keyboard: public Computer {
	public:
		Keyboard(void) {
			std::cout << "Keyboard created." << std::endl;
		}
};

int main(void) {
	Machine machine(2);
	machine.info();

	return 0;
}

/*
 * main idea:
 * modify code_number using all classes
 *
 * TODO: find a way to declare a constructor the same way as I did on the second constructor of Machine
 */

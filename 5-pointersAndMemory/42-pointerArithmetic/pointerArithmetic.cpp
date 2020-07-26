#include <iostream>

int main(void) {
	const int NUMBERS_ARR_MAX = 5;
	int numbers[NUMBERS_ARR_MAX] = {
		1,
		2,
		3,
		4,
		5
	};

	int* ptrNumbers = &numbers[0];
	int* ptrLastIndexNumbers = &numbers[NUMBERS_ARR_MAX - 1];

	while (ptrNumbers <= ptrLastIndexNumbers) {
		std::cout << *ptrNumbers << " " << std::flush;

		ptrNumbers++;
	}
	std::cout << std::endl;

	ptrNumbers = numbers;

	long elements = (ptrLastIndexNumbers - ptrNumbers); 
	/*on the tutorial video, it was taught that ptrLastIndexNumbers should have the value of NUMBERS_ARR_MAX; I don't think it's a good idea, since the own name of the variable is already wrong.*/
	std::cout << elements << std::endl;

	return 0;
}

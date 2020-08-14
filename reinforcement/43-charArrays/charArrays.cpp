#include <iostream>

int main(void) {
	char chArray[] = {
		'a',
		'b',
		'c',
		'd',
		'e'
	};

	char chArray2[] = "abcde";

	std::cout << sizeof(chArray) << std::endl; //5
	std::cout << sizeof(chArray2) << std::endl; //6, 0 on last index.

	for(int i = 0; i < sizeof(chArray); i++) {
		std::cout << i << ". " << chArray[i] << std::endl;
	}

	std::cout << std::endl;

	for(int i = 0; i < sizeof(chArray2); i++) {
		std::cout << i << ". " << chArray2[i] << std::endl;
	}

	return 0;
}

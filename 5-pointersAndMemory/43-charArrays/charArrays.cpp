#include <iostream>

int main(void) {
	char ch[] = "primitive_string";
	std::cout << ch << std::endl;

	std::cout << std::endl;

	for (int i = 0; i < sizeof(ch); i++) {
		std::cout << i << ". " << ch[i] << std::endl;
	}

	std::cout << std::endl;

	int i = 0;
	while (true) {
		if (ch[i] == 0) {
			break;
		}

		std::cout << i << ". " << ch[i] << std::endl;
		i++;
	}

	return 0;
}

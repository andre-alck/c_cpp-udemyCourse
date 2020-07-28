#include <iostream>

void addTen(int &number) {
	number += 10;
}

int main(void) {
	int n = 0;

	std::cout << n << std::endl;
	addTen (n);
	std::cout << n << std::endl;

	return 0;
}

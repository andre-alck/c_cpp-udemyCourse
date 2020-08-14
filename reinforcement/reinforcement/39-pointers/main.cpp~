#include <iostream>

void changeToPi(double* dValue) { //points the memory address of dValue;
	*dValue = 3.1415;
}

int main(void) {
	double dValue = 1.234;
	std::cout << "dVaule before calling changeToPi: " << dValue << std::endl;
	changeToPi(&dValue); //passing the address of dValue to the function be able to point at it.
	std::cout << "dVaule after calling changeToPi: " << dValue << std::flush;

	return 0;
}

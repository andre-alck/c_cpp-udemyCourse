#include <iostream>

int main(void) {
	float arr[] = {
		2345,
		45,
		7498,
		-3978457,
		32157,
		9806,
		31415
	};

	const int sizeArr = (sizeof(arr) / sizeof(arr[0]));

	float* fPtr = arr;

	std::cout << "1. " << std::flush;
	for (int i = 0; i < sizeArr; i++) {
		std::cout << fPtr[i] << " " << std::flush;
	}

	std::cout << std::endl;
	std::cout << "2. " << std::flush;
	for (int i = 0; i < sizeArr; i++, fPtr++) {
		std::cout << *fPtr << " " << std::flush;
	}

	const int lastIndex = sizeArr - 1;

	float* ptrElements = arr;
	float* ptrEnd = &arr[lastIndex];

	std::cout << std::endl;
	std::cout << "3. " << std::flush;
	while (true) {
		std::cout << *ptrElements << " " << std::flush;

		if (*ptrElements == *ptrEnd) {
			break;
		}

		ptrElements++;
	}

    return 0;
}

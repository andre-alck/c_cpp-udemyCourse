#include <iostream>

#define NEW_LINE std::cout << std::endl;

int main(void) {
	int arr[] = {
		1,
		2,
		3
	};

	int sizeArr = sizeof(arr) / sizeof(arr[0]);

	int* ptrArr = arr;
	for(int i = 0; i < sizeArr; i++) {
			std::cout << *ptrArr << " " << std::flush;
			ptrArr++;
	}

	NEW_LINE;

	int* ptrArr2 = arr;
	for(int i = 0; i < sizeArr; i++) {
		std::cout << ptrArr2[i] << " " << std::flush;
	}

	NEW_LINE;

	int* ptrArr3 = arr;
	int lastPosition = sizeof(arr) / sizeof(arr[0]) - 1;
	int* ptrEnd = &(arr[lastPosition]);
	while(true) {
		std::cout << *ptrArr3 << " " << std::flush;

		if(*ptrArr3 == *ptrEnd) {
			break;
		}

		ptrArr3++;
	}
}

#include <iostream>
#include <string>

#define NEW_LINE std::cout << std::endl;

void show1(std::string texts[], const int nElements) {
	for(int i = 0; i < 3; i++) {
		std::cout << texts[i] << std::endl;
	}
}

void show2(std::string* texts, const int nElements) {
	for(int i = 0; i < 3; i++) {
		std::cout << texts[i] << std::endl;
	}
}

void show3(std::string (&texts)[3]) {
	for(int i = 0; i < sizeof(texts) / sizeof(texts[0]); i++) {
		std::cout << texts[i] << std::endl;
	}
}

char* getMemory(void) {
	char* pMem = new char[100];

	return pMem;
}

void freeMemory(char* pMEM) {
	delete [] pMEM;
}

int main(void) {
	std::string texts[] = {
		"item1",
		"item2",
		"item3"
	};

	const int nTexts = sizeof(texts) / sizeof(texts[0]);
	show1(texts, nTexts);
	NEW_LINE;
	show2(texts, nTexts);
	NEW_LINE;
	show3(texts);

	char* pMemory = getMemory();
	freeMemory(pMemory);

	return 0;
}

#include <iostream>

int main(void)
{
	char text[] = "primitive string"; //number of visible characters: 16

	int numberChars = sizeof(text) - 1;

	char *ptrStart = text;
	char *ptrEnd = text + numberChars - 1; //text = text[0]; numberChars = text[16]; numberChars - 1 = last index of array!

	while (ptrStart < ptrEnd)
	{
		char save = *ptrStart;

		*ptrStart = *ptrEnd;
		*ptrEnd = save;

		ptrStart++;
		ptrEnd--;
	}

	std::cout << text << std::endl;

	return 0;
}
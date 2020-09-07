#include <iostream>
#include "SDL.h"

int main(void)
{
	if(SDL_Init(SDL_INIT_VIDEO < 0))
	{
		std::cout << "Init failed." << std::endl;
		return 1;
	}

	std::cout << "Init succeeded." << std::endl;

	SDL_Quit();

	return 0;
}

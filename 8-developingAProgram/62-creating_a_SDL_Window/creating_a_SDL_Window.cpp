#include <iostream>
#include "SDL.h"

int main(void)
{
	if(SDL_Init(SDL_INIT_VIDEO < 0))
	{
		std::cout << "Init failed." << std::endl;
		return 1;
	}
	else
	{
		std::cout << "Init succeeded." << std::endl;
	}

	const int SCREEN_WIDTH = 800;
	const int SCREEN_HEIGHT = 600;

	SDL_Window *window = SDL_CreateWindow("Particle", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

	if(window == NULL)
	{
		SDL_Quit();
		return 2;
	}

	bool quit = false;

	SDL_Event event;

	while(quit == false)
	{
		while(SDL_PollEvent(&event))
		{
			if((event.type) == SDL_QUIT)
			{
				quit = true;
			}
		}
	}

	SDL_DestroyWindow(window);
	SDL_Quit();

	return 0;
}

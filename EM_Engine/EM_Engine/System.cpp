#include "System.h"
#include <SDL.h>

namespace engine {

	System::System()
	{
		SDL_Init(SDL_INIT_EVERYTHING);
		win = SDL_CreateWindow("Game", 100, 100, 600, 500, 0);
		ren = SDL_CreateRenderer(win, -1, 0);
	}


	System::~System()
	{
		SDL_DestroyRenderer(ren);
		SDL_DestroyWindow(win);
		SDL_Quit();
	}

	System sys;
}

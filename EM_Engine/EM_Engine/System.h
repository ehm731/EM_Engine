#ifndef SYSTEM_H
#define SYSTEM_H
#include <SDL.h>

namespace engine {

	class System
	{
	public:
		System();
		SDL_Renderer* getRen() { return ren; }
		SDL_Window* getWin() { return win; }
		~System();
	private:
		SDL_Renderer* ren;
		SDL_Window* win;
	};

	extern System sys;

}
#endif


#ifndef SPRITE_H
#define SPRITE_H
#include <SDL.h>

namespace engine {

	class Sprite
	{
	public:
		void draw();
		~Sprite();
		SDL_Rect getRect() const { return rect; }
		Sprite(const SDL_Rect& r);
	private:
		SDL_Rect rect;
		SDL_Texture* image;
	};
}
#endif


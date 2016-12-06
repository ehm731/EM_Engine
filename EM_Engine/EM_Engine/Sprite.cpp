#include "Sprite.h"
#include <SDL_image.h>
#include "System.h"

namespace engine {

	Sprite::Sprite(const SDL_Rect& r):rect(r)
	{
		image = IMG_LoadTexture(sys.getRen(), "\\Goofy2\ht15\mino5265\My Documents\PROG3\f11_12");
	}

	void Sprite::draw() {
		SDL_RenderCopy(sys.getRen(), image, NULL, &getRect());
	}

	Sprite::~Sprite()
	{
		SDL_DestroyTexture(image);
	}

}
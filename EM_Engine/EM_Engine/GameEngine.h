#ifndef GAMEENGINE_H
#define GAMEENGINE_H
#include <vector>
#include "Sprite.h"

namespace engine {

	class GameEngine
	{
	public:
		GameEngine();
		~GameEngine();
		void add(Sprite* s);
		void run();
	private:
		std::vector<Sprite*> sprites;
	};
}
#endif


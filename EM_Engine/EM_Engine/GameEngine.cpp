#include "GameEngine.h"
#include "System.h"

namespace engine {

	GameEngine::GameEngine()
	{
	}

	void GameEngine::add(Sprite* s) {
		sprites.push_back(s);
	}

	void GameEngine::run() {
		bool goOn = true;
		while (goOn) {
			SDL_SetRenderDrawColor(sys.getRen(), 255, 255, 255, 0);
			SDL_RenderClear(sys.getRen());
			for (Sprite* s : sprites) {
				s->draw();
			}
			SDL_RenderPresent(sys.getRen());
		}
	}

	GameEngine::~GameEngine()
	{
		for (Sprite* s : sprites) {
			delete s;
		}
	}

}

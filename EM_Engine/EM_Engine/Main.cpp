#include "GameEngine.h"
#include "Sprite.h"

using namespace engine;

int main(int argc, char** argv) {
	GameEngine ge;
	Sprite* s = new Sprite({ 100, 100, 100, 100 });
	ge.add(s);
	ge.run();
	return 0;
}
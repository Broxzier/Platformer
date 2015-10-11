#include "platformer.h"

int main() {
	Program *game;

	game = new Platformer();
	game->Start();
	game->Run();
	game->Close();

	delete game;
	game = nullptr;

	return 0;
}

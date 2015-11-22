#include "platformer.h"

int main(int argc, char* argv[]) {
	Program *game;

	game = new Platformer(argc, argv);
	game->Start();
	game->Run();
	game->Close();

	delete game;
	game = nullptr;

	return 0;
}

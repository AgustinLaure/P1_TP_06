#include "Game.h"

int main()
{
	srand(time(0));

	bool isGameRunning = true;

	do
	{
		game::Game* currentGame = new game::Game();
		
		currentGame->play(isGameRunning);

		delete currentGame;
		currentGame = nullptr;

	} while (isGameRunning);

	return 0;
}
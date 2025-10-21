#include "Game.h"
#include <iostream>

namespace Game
{
	int Game::getRandom(int min, int max) 
	{
		return rand() % (max - min);
	}
}

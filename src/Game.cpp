#include "Game.h"

#include <Windows.h>

#include "SwordMan.h"
#include "Lancer.h"
#include "Archer.h"
#include "CrossbowMan.h"

namespace game
{
	bool Game::isRunning = true;
	soldier::Soldier* Game::soldiers[] = {};

	soldier::Soldier* Game::getRandomSoldier(const int pos)
	{
		PossibleSoldiers randomSoldier = static_cast<PossibleSoldiers>(getRandom(0, static_cast<int>(PossibleSoldiers::End)));

		soldier::Soldier* soldierPointer = nullptr;

		switch (randomSoldier)
		{
		case game::PossibleSoldiers::SwordMan:
			soldierPointer = new swordMan::SwordMan(swordMan::hp, swordMan::stamina, pos, swordMan::dmg, swordMan::attackRadius);
			break;

		case game::PossibleSoldiers::Lancer:
			soldierPointer = new lancer::Lancer(lancer::hp, lancer::stamina, pos, lancer::dmg, lancer::attackRadius);
			break;

		case game::PossibleSoldiers::Archer:
			soldierPointer = new archer::Archer(archer::hp, archer::stamina, pos, archer::dmg, archer::minDistance, archer::maxDistance);
			break;

		case game::PossibleSoldiers::CrossbowMan:
			soldierPointer = new crossbowMan::CrossbowMan(crossbowMan::hp, crossbowMan::stamina, pos, crossbowMan::dmg, crossbowMan::minDistance, crossbowMan::maxDistance);
			break;

		default:
			break;
		}

		return soldierPointer;
	}

	void Game::initSoldiers()
	{
		for (int i = 0; i < maxSoldiers; i++)
		{
			soldiers[i] = getRandomSoldier(i);
		}
	}

	int Game::getRandom(int min, int max)
	{
		return rand() % (max - min);
	}

	void gotoxy(int x, int y)
	{
		HANDLE con;
		con = GetStdHandle(STD_OUTPUT_HANDLE);

		COORD coord;

		coord.X = x;
		coord.Y = y;

		SetConsoleCursorPosition(con, coord);
	}

	void print(int x, int y, string text)
	{
		gotoxy(x, y);

		cout << text;
	}

	void print(int x, int y, char text)
	{
		gotoxy(x, y);

		cout << text;
	}

	void Game::game()
	{
		initSoldiers();

		while (isRunning)
		{
			
		}
	}
}

#pragma once

#include <iostream>

#include "Soldier.h"

using namespace std;

namespace game
{
	enum class PossibleSoldiers
	{
		Start,
		SwordMan,
		Lancer,
		Archer,
		CrossbowMan,
		End
	};

	const int maxSoldiers = 10;

	class Game
	{
		private:
			static soldier::Soldier* soldiers[maxSoldiers];
			static bool isRunning;

			static soldier::Soldier* getRandomSoldier(const int pos);
			static void initSoldiers();
			static int getRandom(const int min, const int max);
			static void gotoxy(int x, int y);
			static void print(int x, int y, string text);
			static void print(int x, int y, char text);
		public:
			static void game();
	};
}

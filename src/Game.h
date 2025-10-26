#pragma once

#include "Soldier.h"

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
	const int distBetweenNames = 16;
	const int maxLinesPerSoldier = 7;
	const int distBetweenLines = 3;

	class Game
	{
		private:
			static soldier::Soldier* soldiers[maxSoldiers];
			static bool isRunning;

			static soldier::Soldier* getRandomSoldier(const int pos);
			static void initSoldiers();
			static void drawStats();
		public:
			static void game();
	};
}

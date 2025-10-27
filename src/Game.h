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
	const int maxLinesPerSoldier = 8;
	const int distBetweenLines = 4;

	class Game
	{
		private:
			soldier::Soldier* soldiers[maxSoldiers];
			bool isMatchRunning;
			soldier::Soldier* winner;
			int userInput;

			soldier::Soldier* getRandomSoldier(const int pos);
			void initSoldiers();
			void drawStats();
			int getSoldierTarget(int self);
			bool isWinner();
			void showWinner();
			void runAgain(bool& isGameRunning);
			
		public:
			Game();
			void play(bool& isGameRunning);
			~Game();
	};
}

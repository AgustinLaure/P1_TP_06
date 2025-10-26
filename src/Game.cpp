#include "Game.h"

#include <iostream>

#include "SwordMan.h"
#include "Lancer.h"
#include "Archer.h"
#include "CrossbowMan.h"
#include "Random.h"
#include "consoleHandle.h"

namespace game
{
	bool Game::isRunning = true;
	soldier::Soldier* Game::soldiers[] = {};

	soldier::Soldier* Game::getRandomSoldier(const int pos)
	{
		PossibleSoldiers randomSoldier = static_cast<PossibleSoldiers>(random::getRandom(1, static_cast<int>(PossibleSoldiers::End) - 1));

		soldier::Soldier* soldierPointer = nullptr;

		switch (randomSoldier)
		{
		case game::PossibleSoldiers::SwordMan:

			soldierPointer = new swordMan::SwordMan
			(
				random::getRandom(swordMan::minHp, swordMan::maxHp),
				random::getRandom(swordMan::minStamina, swordMan::maxStamina),
				pos,
				random::getRandom(swordMan::minDmg, swordMan::maxDmg),
				swordMan::name,
				swordMan::attackRadius
			);

			break;

		case game::PossibleSoldiers::Lancer:

			soldierPointer = new lancer::Lancer
			(
				random::getRandom(lancer::minHp, lancer::maxHp),
				random::getRandom(lancer::minStamina, lancer::maxStamina),
				pos,
				random::getRandom(lancer::minDmg, lancer::maxDmg),
				lancer::name,
				lancer::attackRadius
			);

			break;

		case game::PossibleSoldiers::Archer:

			soldierPointer = new archer::Archer
			(
				random::getRandom(archer::minHp, archer::maxHp),
				random::getRandom(archer::minStamina, archer::maxStamina),
				pos,
				random::getRandom(archer::minDmg, archer::maxDmg),
				archer::name,
				archer::minDistance,
				archer::maxDistance
			);

			break;

		case game::PossibleSoldiers::CrossbowMan:

			soldierPointer = new crossbowMan::CrossbowMan
			(
				random::getRandom(crossbowMan::minHp, crossbowMan::maxHp),
				random::getRandom(crossbowMan::minStamina, crossbowMan::maxStamina),
				pos,
				random::getRandom(crossbowMan::minDmg, crossbowMan::maxDmg),
				crossbowMan::name,
				crossbowMan::minDistance,
				crossbowMan::maxDistance
			);

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

	void Game::game()
	{
		initSoldiers();

		while (isRunning)
		{
			drawStats();
		}
	}

	void Game::drawStats()
	{
		int distanceBetweenNames = 0;

		for (int i = 0; i < maxSoldiers; i++)
		{
			if (i > 0)
			{
				distanceBetweenNames = 0;
				for (int j = 0; j < i; j++)
				{
					distanceBetweenNames += soldiers[j]->getName().length() + distBetweenNames;
				}
			}

			consoleHandle::print(0 + distanceBetweenNames, 0, soldiers[i]->getName());
			std::string isAliveText = " ";

			if (soldiers[i]->getIsAlive())
			{
				isAliveText = "Alive";
			}
			else
			{
				isAliveText = "Dead";
			}

			consoleHandle::print(0 + distanceBetweenNames, 1, isAliveText);

			consoleHandle::print(0 + distanceBetweenNames, 2, "Hp ");
			std::cout << soldiers[i]->getHp();

			consoleHandle::print(0 + distanceBetweenNames, 3, "Stam ");
			std::cout << soldiers[i]->getStamina();

			consoleHandle::print(0 + distanceBetweenNames, 4, "Dmg ");
			std::cout << soldiers[i]->getDamage();

			meleeSoldier::MeleeSoldier* meleePointer = dynamic_cast<meleeSoldier::MeleeSoldier*>(soldiers[i]);
			rangedSoldier::RangedSoldier* rangedPointer = dynamic_cast<rangedSoldier::RangedSoldier*>(soldiers[i]);

			if (meleePointer)
			{
				consoleHandle::print(0 + distanceBetweenNames, 5, "Radius ");
				std::cout << meleePointer->getAttackRadius();
			}
			else if (rangedPointer)
			{
				consoleHandle::print(0 + distanceBetweenNames, 5, "MinDist ");
				std::cout << rangedPointer->getMinDistance();

				consoleHandle::print(0 + distanceBetweenNames, 6, "MaxDist ");
				std::cout << rangedPointer->getMaxDistance();
			}

		}
	}
}

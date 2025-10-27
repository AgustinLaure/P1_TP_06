#include "Game.h"

#include <iostream>
#include <string>

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
				swordMan::staminaAttackCost,
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
				lancer::staminaAttackCost,
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
				archer::staminaAttackCost,
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
				crossbowMan::staminaAttackCost,
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

		int repeat = 1;

		for (int i = 0; i < maxSoldiers; i++)
		{
			if (soldiers[i])
			{
				if (soldiers[i]->getName() == soldierPointer->getName())
				{
					if (repeat-1 % 10 == 0)
					{
						soldierPointer->setName(soldierPointer->getName() + ' ');
					}

					repeat++;

					std::string name = soldierPointer->getName();
					name[name.size()-1] = '0' + repeat;

					soldierPointer->setName(name);
				}
			}
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
			for (int i = 0; i < maxSoldiers; i++)
			{
				consoleHandle::clearScreen();

				drawStats();
				soldiers[i]->setTarget(getSoldierTarget(i));
				soldiers[i]->update(soldiers);

				std::cout << std::endl << std::endl;

				consoleHandle::pauseConsole();
			}
		}
	}

	void Game::drawStats()
	{
		int line = 0;
		int namesWritten = 0;

		for (int i = 0; i < maxSoldiers; i++)
		{
			if (i % 5 == 0 && i != 0)
			{
				line++;
				line = maxLinesPerSoldier * line + distBetweenLines;
				namesWritten = 0;
			}

			consoleHandle::print(distBetweenNames * namesWritten, line + 1, "Position ");
			std::cout << i+1;

			consoleHandle::print(distBetweenNames * namesWritten, line+3, soldiers[i]->getName());
			std::string isAliveText = " ";

			if (soldiers[i]->getIsAlive())
			{
				isAliveText = "Alive";
			}
			else
			{
				isAliveText = "Dead";
			}

			consoleHandle::print(distBetweenNames * namesWritten, line + 4, isAliveText);

			consoleHandle::print(distBetweenNames * namesWritten, line + 5, "Hp ");
			std::cout << soldiers[i]->getCurrentHp() << " / " << soldiers[i]->getMaxHp();

			consoleHandle::print(distBetweenNames * namesWritten, line + 6, "Stam ");
			std::cout << soldiers[i]->getCurrentStamina() << " / " << soldiers[i]->getMaxStamina();

			consoleHandle::print(distBetweenNames * namesWritten, line + 7, "Dmg ");
			std::cout << soldiers[i]->getDamage();

			meleeSoldier::MeleeSoldier* meleePointer = dynamic_cast<meleeSoldier::MeleeSoldier*>(soldiers[i]);
			rangedSoldier::RangedSoldier* rangedPointer = dynamic_cast<rangedSoldier::RangedSoldier*>(soldiers[i]);

			if (meleePointer)
			{
				consoleHandle::print(distBetweenNames * namesWritten, line + 8, "Radius ");
				std::cout << meleePointer->getAttackRadius();
			}
			else if (rangedPointer)
			{
				consoleHandle::print(distBetweenNames * namesWritten, line + 8, "MinDist ");
				std::cout << rangedPointer->getMinDistance();

				consoleHandle::print(distBetweenNames * namesWritten, line + 9, "MaxDist ");
				std::cout << rangedPointer->getMaxDistance();
			}

			std::cout << std::endl << std::endl << std::endl;

			namesWritten++;
		}
	}

	int Game::getSoldierTarget(int self)
	{
		int target = 0;

		do
		{
			target = random::getRandom(0, maxSoldiers - 1);

		} while (!soldiers[target]->getIsAlive() || target == self);

		return target;
	}
}

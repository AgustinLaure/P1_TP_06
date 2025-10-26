#pragma once

#include "RangedSoldier.h"
#include "Soldier.h"

namespace crossbowMan
{
	const int minHp = 65;
	const int maxHp = 75;

	const int minStamina = 10;
	const int maxStamina = 15;

	const int minDmg = 6;
	const int maxDmg = 7;

	const std::string name = "CrossbowMan";

	const int minDistance = 1;
	const int maxDistance = 4;

	class CrossbowMan : public rangedSoldier::RangedSoldier
	{
	public:
		CrossbowMan(int hp, int stamina, int pos, int damage, std::string name, int minDistance, int maxDistance);
		void attack(Soldier* target) override;
		void rest() override;
	};
}


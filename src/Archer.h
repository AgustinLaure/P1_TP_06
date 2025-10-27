#pragma once

#include "RangedSoldier.h"

namespace archer
{
	const int minHp = 70;
	const int maxHp = 90;

	const int minStamina = 13;
	const int maxStamina = 15;

	const int staminaAttackCost = 10;

	const int minDmg = 8;
	const int maxDmg = 10;

	const std::string name = "Archer";

	const int minDistance = 2;
	const int maxDistance = 5;

	class Archer : public rangedSoldier::RangedSoldier
	{
	private:

	public:
		Archer(int maxHp, int maxStamina, int staminaAttackCost, int pos, int dmg, std::string name, int minDistance, int maxDistance);
	};
}

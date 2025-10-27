#pragma once

#include "Game/Soldier/Ranged/RangedSoldier.h"

namespace archer
{
	const int minHp = 40;
	const int maxHp = 65;

	const int minStamina = 10;
	const int maxStamina = 15;

	const int staminaAttackCost = 5;

	const int minDmg = 15;
	const int maxDmg = 20;

	const std::string name = "Archer";

	const int minDistance = 2;
	const int maxDistance = 5;

	class Archer : public rangedSoldier::RangedSoldier
	{
	public:
		Archer(int maxHp, int maxStamina, int staminaAttackCost, int pos, int dmg, std::string name, int minDistance, int maxDistance);
		~Archer() override;
	};
}

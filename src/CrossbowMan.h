#pragma once

#include "RangedSoldier.h"
#include "Soldier.h"

namespace crossbowMan
{
	const int hp = 70;
	const int stamina = 15;
	const int dmg = 7;
	const int minDistance = 1;
	const int maxDistance = 4;

	class CrossbowMan : public rangedSoldier::RangedSoldier
	{
	public:
		CrossbowMan(int hp, int stamina, int pos, int damage, int minDistance, int maxDistance);
		void attack(Soldier* target) override;
		void rest() override;
	};
}


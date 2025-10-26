#pragma once

#include "RangedSoldier.h"
#include "Soldier.h"

namespace CrossbowMan
{

	class CrossbowMan : public RangedSoldier::RangedSoldier
	{
		CrossbowMan(int hp, int stamina, int pos, int damage, int radiusAttack);
		void attack(Soldier* target) override;
		void rest() override;
	};
}


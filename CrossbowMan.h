#pragma once

#include "RangedSoldier.h"
#include "Soldier.h"

namespace CrossbowMan
{

	class CrossbowMan : public RangedSoldier::RangedSoldier
	{
		void attack(Soldier* target) override;
		void rest() override;
	};
}


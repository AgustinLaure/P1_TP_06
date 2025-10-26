#pragma once

#include "Soldier.h"

namespace rangedSoldier
{
	class RangedSoldier : public soldier::Soldier
	{
	private:
		int minDistance;
		int maxDistance;
	public:
	RangedSoldier(int hp, int stamina, int pos, int dmg, int minDistance, int maxDistance);
	};
}

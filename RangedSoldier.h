#pragma once

#include "Soldier.h"

namespace RangedSoldier
{
	class RangedSoldier : public Soldier::Soldier
	{
	private:
		int minDistance;
		int maxDistance;
	public:
	RangedSoldier(int hp, int stamina, int pos, int minDistance, int maxDistance);
	};
}

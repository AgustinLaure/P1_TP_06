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
	RangedSoldier(int hp, int stamina, int minDistance, int maxDistance);
	};
}

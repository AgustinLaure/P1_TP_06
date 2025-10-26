#pragma once

#include "RangedSoldier.h"

namespace archer
{
	const int hp = 100;
	const int stamina = 15;
	const int dmg = 10;
	const int minDistance = 2;
	const int maxDistance = 5;

	class Archer : public rangedSoldier::RangedSoldier
	{
	private:

	public:
		Archer(int hp, int stamina, int pos, int dmg, int minDistance, int maxDistance);
		void attack(Soldier* target) override;
		void rest() override;
	};
}

#include "Archer.h"

namespace archer
{
	Archer::Archer(int hp, int stamina, int pos, int dmg, int minDistance, int maxDistance) : rangedSoldier::RangedSoldier(hp, stamina, pos, dmg, minDistance, maxDistance) {}

	void Archer::attack(Soldier* target)
	{

	}

	void Archer::rest()
	{

	}
}
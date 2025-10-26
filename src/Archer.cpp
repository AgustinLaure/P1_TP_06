#include "Archer.h"

namespace archer
{
	Archer::Archer(int hp, int stamina, int pos, int dmg, std::string name, int minDistance, int maxDistance) : RangedSoldier(hp, stamina, pos, dmg, name, minDistance, maxDistance) {}

	void Archer::attack(Soldier* target)
	{

	}

	void Archer::rest()
	{

	}
}



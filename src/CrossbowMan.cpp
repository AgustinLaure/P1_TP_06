#include "CrossbowMan.h"

namespace crossbowMan
{
	CrossbowMan::CrossbowMan(int hp, int stamina, int pos, int damage, int minDistance, int maxDistance) : rangedSoldier::RangedSoldier(hp, stamina, pos, damage, minDistance, maxDistance) {}

	void CrossbowMan::attack(Soldier* target)
	{

	}

	void CrossbowMan::rest()
	{

	}
}
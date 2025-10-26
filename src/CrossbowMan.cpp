#include "CrossbowMan.h"

namespace crossbowMan
{
	CrossbowMan::CrossbowMan(int hp, int stamina, int pos, int damage, std::string name, int minDistance, int maxDistance) : RangedSoldier(hp, stamina, pos, damage,name, minDistance, maxDistance) {}

	void CrossbowMan::attack(Soldier* target)
	{

	}

	void CrossbowMan::rest()
	{

	}
}
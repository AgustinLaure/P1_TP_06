#include "Archer.h"

namespace archer
{
	Archer::Archer(int hp, int maxStamina, int staminaAttackCost, int pos, int dmg, std::string name, int minDistance, int maxDistance) : RangedSoldier(hp, maxStamina, staminaAttackCost, pos, dmg, name, minDistance, maxDistance) {}
}



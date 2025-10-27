#include "Game/Soldier/Ranged/Archer/Archer.h"

namespace archer
{
	Archer::Archer(int maxHp, int maxStamina, int staminaAttackCost, int pos, int dmg, std::string name, int minDistance, int maxDistance) : RangedSoldier(maxHp, maxStamina, staminaAttackCost, pos, dmg, name, minDistance, maxDistance) {}
	Archer::~Archer() {}
}



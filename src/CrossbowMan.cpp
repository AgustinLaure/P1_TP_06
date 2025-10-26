#include "CrossbowMan.h"

namespace crossbowMan
{
	CrossbowMan::CrossbowMan(int hp, int maxStamina, int staminaAttackCost, int pos, int damage, std::string name, int minDistance, int maxDistance) : RangedSoldier(hp, maxStamina, staminaAttackCost, pos, damage,name, minDistance, maxDistance) {}
}
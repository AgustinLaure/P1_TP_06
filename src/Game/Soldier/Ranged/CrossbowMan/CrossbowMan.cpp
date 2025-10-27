#include "Game/Soldier/Ranged/CrossbowMan/CrossbowMan.h"

namespace crossbowMan
{
	CrossbowMan::CrossbowMan(int maxHp, int maxStamina, int staminaAttackCost, int pos, int damage, std::string name, int minDistance, int maxDistance) : RangedSoldier(maxHp, maxStamina, staminaAttackCost, pos, damage,name, minDistance, maxDistance) {}
	CrossbowMan::~CrossbowMan() {}
}
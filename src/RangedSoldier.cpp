#include "RangedSoldier.h"

namespace rangedSoldier
{
	RangedSoldier::RangedSoldier(int hp, int stamina, int pos, int dmg, int minDistance, int maxDistance) : Soldier(hp, stamina, pos, damage), minDistance(minDistance), maxDistance(maxDistance) {}
}

#include "RangedSoldier.h"

namespace RangedSoldier
{
	RangedSoldier::RangedSoldier(int hp, int stamina, int minDistance, int maxDistance) : Soldier(hp, stamina), minDistance(minDistance), maxDistance(maxDistance) {}
}

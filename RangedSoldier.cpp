#include "RangedSoldier.h"

namespace RangedSoldier
{
	RangedSoldier::RangedSoldier(int hp, int stamina, int pos, int minDistance, int maxDistance) : Soldier(hp, stamina, pos), minDistance(minDistance), maxDistance(maxDistance) {}
}

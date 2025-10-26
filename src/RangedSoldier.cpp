#include "RangedSoldier.h"

namespace rangedSoldier
{
	RangedSoldier::RangedSoldier(int hp, int stamina, int pos, int damage, std::string name, int minDistance, int maxDistance) : Soldier(hp, stamina, pos, damage, name), minDistance(minDistance), maxDistance(maxDistance) {}
	int RangedSoldier::getMinDistance() { return minDistance; }
	int RangedSoldier::getMaxDistance() { return maxDistance; }
}

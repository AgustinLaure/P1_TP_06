#include "Game/Soldier/Ranged/RangedSoldier.h"

namespace rangedSoldier
{
	RangedSoldier::RangedSoldier(int maxHp, int maxStamina, int staminaAttackCost, int pos, int damage, std::string name, int minDistance, int maxDistance) : Soldier(maxHp, maxStamina, staminaAttackCost, pos, damage, name), minDistance(minDistance), maxDistance(maxDistance) {}
	RangedSoldier::~RangedSoldier() {}
	
	int RangedSoldier::getMinDistance() { return minDistance; }
	int RangedSoldier::getMaxDistance() { return maxDistance; }

	void RangedSoldier::attack(Soldier* soldiers[])
	{
		int steps = getSteps(soldiers);

		if (steps >= minDistance && steps <= maxDistance)
		{
			landHit(soldiers);

			landedHitText();
		}
		else
		{
			missedText(soldiers);
		}
	}

	void RangedSoldier::missedText(Soldier* soldiers[])
	{
		int steps = getSteps(soldiers);

		if (steps < minDistance)
		{
			std::cout << " pero el disparo fallo porque estaba muy cerca";
		}
		else if (steps > maxDistance)
		{
			std::cout << " pero el disparo fallo porque se quedo corto";
		}
	}

	void RangedSoldier::landedHitText()
	{
		std::cout << " e impacto el disparo haciendole " << damage << " de danio a un enemigo";
	}

	void RangedSoldier::landHit(Soldier* soldiers[])
	{
		soldiers[target]->takeDamage(damage);
	}
}

#include "RangedSoldier.h"

namespace rangedSoldier
{
	RangedSoldier::RangedSoldier(int maxHp, int maxStamina, int staminaAttackCost, int pos, int damage, std::string name, int minDistance, int maxDistance) : Soldier(maxHp, maxStamina, staminaAttackCost, pos, damage, name), minDistance(minDistance), maxDistance(maxDistance) {}
	int RangedSoldier::getMinDistance() { return minDistance; }
	int RangedSoldier::getMaxDistance() { return maxDistance; }

	void RangedSoldier::attack(Soldier* soldiers[])
	{
		int dist = abs(pos - soldiers[target]->getPos());

		if (dist >= minDistance && dist <= maxDistance)
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
		int dist = abs(pos - soldiers[target]->getPos());

		if (dist < minDistance)
		{
			std::cout << " pero el disparo fallo porque estaba muy cerca";
		}
		else if (dist > maxDistance)
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

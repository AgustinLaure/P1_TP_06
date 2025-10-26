#include "RangedSoldier.h"

namespace rangedSoldier
{
	RangedSoldier::RangedSoldier(int hp, int maxStamina, int staminaAttackCost, int pos, int damage, std::string name, int minDistance, int maxDistance) : Soldier(hp, maxStamina, staminaAttackCost, pos, damage, name), minDistance(minDistance), maxDistance(maxDistance) {}
	int RangedSoldier::getMinDistance() { return minDistance; }
	int RangedSoldier::getMaxDistance() { return maxDistance; }

	void RangedSoldier::attack()
	{
		int dist = abs(pos) - abs(target->getPos());

		if (dist > minDistance && dist < maxDistance)
		{
			landHit();

			landedHitText();
		}
		else
		{
			missedText();
		}
	}

	void RangedSoldier::missedText()
	{
		int dist = abs(pos) - abs(target->getPos());

		if (dist < minDistance)
		{
			std::cout << "pero el disparo fallo porque estaba muy cerca";
		}
		else if (dist > maxDistance)
		{
			std::cout << "pero el disparo fallo porque se quedo corto";
		}
	}

	void RangedSoldier::landedHitText()
	{
		std::cout << " e impacto el disparo haciendole" << damage << " de danio a un enemigo";
	}

	void RangedSoldier::landHit()
	{
		target->takeDamage(damage);
	}
}

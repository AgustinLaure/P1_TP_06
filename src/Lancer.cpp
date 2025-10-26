#include "Lancer.h"

namespace lancer
{
	Lancer::Lancer(int hp, int maxStamina, int staminaAttackCost, int pos, int damage, std::string name, int attackRadius) : MeleeSoldier(hp, maxStamina, staminaAttackCost, pos, damage, name, attackRadius), hitAmount(0) {}

	void Lancer::landHit()
	{
		hitAmount = 0;
		while (target->getPos() != pos)
		{
			if (target->getIsAlive())
			{
				target->takeDamage(damage);
				hitAmount++;
			}

			if (target->getPos() > pos)
			{
				target--;
			}
			else if (target->getPos() < pos)
			{
				target++;
			}
		}
	}

	void Lancer::landedHitText()
	{
		if (hitAmount > 1)
		{
			std::cout << " e impacto a " << hitAmount << " enemigos haciendoles " << damage << " de danio";
		}
		else
		{
			std::cout << " e impacto a un enemigo haciendole " << damage << " de danio";
		}
	}
}

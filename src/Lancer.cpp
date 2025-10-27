#include "Lancer.h"

namespace lancer
{
	Lancer::Lancer(int maxHp, int maxStamina, int staminaAttackCost, int pos, int damage, std::string name, int attackRadius) : MeleeSoldier(maxHp, maxStamina, staminaAttackCost, pos, damage, name, attackRadius), hitAmount(0) {}
	Lancer::~Lancer() {}

	void Lancer::landHit(Soldier* soldiers[])
	{
		hitAmount = 0;

		while (soldiers[target]->getPos() != pos)
		{

			if (soldiers[target]->getIsAlive())
			{
				soldiers[target]->takeDamage(damage);
				hitAmount++;
			}

			if (soldiers[target]->getPos() > pos)
			{
				target = target--;
			}
			else if (soldiers[target]->getPos() < pos)
			{
				target = target++;
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

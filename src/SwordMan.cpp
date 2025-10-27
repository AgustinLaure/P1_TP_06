#include "SwordMan.h"

#include <iostream>

namespace swordMan
{
	SwordMan::SwordMan(int maxHp, int maxStamina, int staminaAttackCost, int pos, int damage, std::string name, int attackRadius) : MeleeSoldier(maxHp, maxStamina, staminaAttackCost, pos, damage, name, attackRadius) {}

	void SwordMan::landedHitText()
	{
		std::cout << " e impacto el golpe haciendole " << damage << " de danio a un enemigo";
	}

	void SwordMan::landHit(Soldier* soldiers[])
	{
		soldiers[target]->takeDamage(damage);
	}
}
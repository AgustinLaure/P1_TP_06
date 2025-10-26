#include "SwordMan.h"

#include <iostream>

namespace swordMan
{
	SwordMan::SwordMan(int hp, int maxStamina, int staminaAttackCost, int pos, int damage, std::string name, int attackRadius) : MeleeSoldier(hp, maxStamina, staminaAttackCost, pos, damage, name, attackRadius) {}

	void SwordMan::landedHitText()
	{
		std::cout << name << " e impacto el golpe haciendole " << damage << " de danio a un enemigo";
	}

	void SwordMan::landHit()
	{
		target->takeDamage(damage);
	}
}
#include "SwordMan.h"

#include <iostream>

namespace swordMan
{
	SwordMan::SwordMan(int hp, int stamina, int pos, int damage, std::string name, int attackRadius) : MeleeSoldier(hp, stamina, pos, damage, name, attackRadius) {}

	void SwordMan::attack(Soldier* target)
	{
		if (abs(pos) - abs(target->getPos()) <= attackRadius)
		{
			target->takeDamage(damage);
		}
	}
	void SwordMan::rest()
	{
		std::cout << "El sword descanso";
	}
}
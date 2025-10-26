#include "SwordMan.h"

#include <iostream>

namespace SwordMan
{
	SwordMan::SwordMan(int hp, int stamina, int pos, int damage, int attackRadius) : MeleeSoldier(hp, stamina, pos, damage, attackRadius) {}

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
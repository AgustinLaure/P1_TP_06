#include "SwordMan.h"

#include <iostream>

namespace SwordMan
{
	SwordMan::SwordMan(int hp, int stamina, int attackRadius) : MeleeSoldier(hp, stamina, attackRadius) {}

	void SwordMan::attack(Soldier* target)
	{
		std::cout << "El soldado sword ataco a " << target->getHp();
	}
	void SwordMan::rest()
	{
		std::cout << "El sword descanso";
	}
}
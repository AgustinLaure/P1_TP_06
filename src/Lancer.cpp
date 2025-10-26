#include "Lancer.h"

namespace lancer
{
	Lancer::Lancer(int hp, int stamina, int pos, int damage, std::string name, int attackRadius) : MeleeSoldier(hp, stamina, pos, damage, name, attackRadius) {}

	void Lancer::attack(Soldier* target)
	{

	}

	void Lancer::rest()
	{

	}
}

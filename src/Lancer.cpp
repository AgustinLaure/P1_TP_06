#include "Lancer.h"

namespace lancer
{
	Lancer::Lancer(int hp, int stamina, int pos, int damage, int attackRadius) : meleeSoldier::MeleeSoldier(hp, stamina, pos, damage, attackRadius) {}

	void Lancer::attack(Soldier* target)
	{

	}

	void Lancer::rest()
	{

	}
}

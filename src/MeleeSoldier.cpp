#include "MeleeSoldier.h"

namespace meleeSoldier
{
	MeleeSoldier::MeleeSoldier(int hp, int stamina, int pos, int damage, std::string name, int attackRadius) : Soldier(hp, stamina, pos, damage, name), attackRadius(attackRadius) {}
	int MeleeSoldier::getAttackRadius() { return attackRadius; }
}

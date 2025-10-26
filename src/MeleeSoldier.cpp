#include "MeleeSoldier.h"

namespace meleeSoldier
{
	MeleeSoldier::MeleeSoldier(int hp, int stamina, int pos, int damage, int attackRadius) : Soldier(hp, stamina, pos, damage), attackRadius(attackRadius) {}
}

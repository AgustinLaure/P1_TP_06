#include "MeleeSoldier.h"

namespace MeleeSoldier
{
	MeleeSoldier::MeleeSoldier(int hp, int stamina, int pos, int damage, int attackRadius) : Soldier(hp, stamina, pos, damage), attackRadius(attackRadius){}
}

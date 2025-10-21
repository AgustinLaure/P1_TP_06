#include "Soldier.h"

#include <iostream>

namespace Soldier
{
	Soldier::Soldier(int hp, int stamina) : hp(hp), stamina() {}

	int Soldier::getHp() { return hp; }
	int Soldier::getStamina() { return stamina; }

	void attack(Soldier* target) {}
	void rest() {}

}

#include "Soldier.h"

#include <iostream>

namespace Soldier
{
	Soldier::Soldier(int hp, int stamina, int pos) : hp(hp), stamina(), pos(pos) {}

	int Soldier::getHp() { return hp; }
	int Soldier::getStamina() { return stamina; }
	void Soldier::takeDamage(int damage)
	{
		hp -= damage;
	}
}

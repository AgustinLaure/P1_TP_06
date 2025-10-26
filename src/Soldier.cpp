#include "Soldier.h"

#include <iostream>

namespace soldier
{
	Soldier::Soldier(int hp, int stamina, int pos, int damage) : hp(hp), stamina(), pos(pos), damage(damage), isAlive(false) {}

	int Soldier::getHp() { return hp; }
	int Soldier::getStamina() { return stamina; }
	bool Soldier::getIsAlive() { return isAlive; }
	int Soldier::getPos(){return pos;}

	void Soldier::takeDamage(int damage)
	{
		hp -= damage;
	}
}

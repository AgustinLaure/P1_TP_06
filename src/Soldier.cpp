#include "Soldier.h"

#include <iostream>

namespace soldier
{
	Soldier::Soldier(int hp, int stamina, int pos, int damage, std::string name) : hp(hp), stamina(stamina), pos(pos), damage(damage), name(name), isAlive(true) {}

	std::string Soldier::getName() { return name; }
	int Soldier::getPos() { return pos; }
	int Soldier::getHp() { return hp; }
	int Soldier::getStamina() { return stamina; }
	bool Soldier::getIsAlive() { return isAlive; }
	int Soldier::getDamage() { return damage; }
	void Soldier::setName(std::string name) { this->name = name; };

	void Soldier::takeDamage(int damage)
	{
		hp -= damage;
	}
}

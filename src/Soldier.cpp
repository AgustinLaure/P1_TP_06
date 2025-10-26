#include "Soldier.h"

#include <iostream>

namespace soldier
{
	void Soldier::tryAttackText(int pos)
	{
		std::cout << name << " intento atacar a la posicion " << pos;
	}

	void Soldier::restText()
	{
		std::cout << name << " no tenia energia suficiente, asi que descanso este turno";
	}

	void Soldier::loseStamina(int amount)
	{
		currentStamina -= amount;

		if (currentStamina < 0)
		{
			currentStamina = 0;
		}
	}

	void Soldier::rest()
	{
		recoverStamina();
		restText();
	}

	void Soldier::recoverStamina()
	{
		currentStamina = maxStamina;
	}

	Soldier::Soldier(int hp, int maxStamina, int staminaAttackCost, int pos, int damage, std::string name) : hp(hp), currentStamina(maxStamina), maxStamina(maxStamina), staminaAttackCost(staminaAttackCost), pos(pos), damage(damage), name(name), isAlive(true), target(nullptr) {}
	
	std::string Soldier::getName() { return name; }
	int Soldier::getHp() { return hp; }
	int Soldier::getCurrentStamina() { return currentStamina; }
	int Soldier::getMaxStamina() { return maxStamina; }
	int Soldier::getStaminaAttackCost() { return staminaAttackCost; }
	bool Soldier::getIsAlive() { return isAlive; }
	int Soldier::getDamage() { return damage; }
	int Soldier::getPos() { return pos; }

	void Soldier::setName(std::string name) { this->name = name; };
	
	void Soldier::takeDamage(int damage)
	{
		hp -= damage;
	}

	void Soldier::update(Soldier* target)
	{
		if (currentStamina < staminaAttackCost)
		{
			rest();
		}
		else
		{
			attack();
		}
	}
}

#include "Soldier.h"

#include <iostream>

namespace soldier
{
	void Soldier::tryAttackText(int pos)
	{
		std::cout << name << " intento atacar a la posicion " << pos+1;
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

	Soldier::Soldier(int maxHp, int maxStamina, int staminaAttackCost, int pos, int damage, std::string name) : maxHp(maxHp), currentHp(maxHp), currentStamina(maxStamina), maxStamina(maxStamina), staminaAttackCost(staminaAttackCost), pos(pos), damage(damage), name(name), isAlive(true), target(0) {}
	
	std::string Soldier::getName() { return name; }
	int Soldier::getCurrentHp() { return currentHp; }
	int Soldier::getMaxHp() { return maxHp; }
	int Soldier::getCurrentStamina() { return currentStamina; }
	int Soldier::getMaxStamina() { return maxStamina; }
	int Soldier::getStaminaAttackCost() { return staminaAttackCost; }
	bool Soldier::getIsAlive() { return isAlive; }
	int Soldier::getDamage() { return damage; }
	int Soldier::getPos() { return pos; }

	void Soldier::setName(std::string name) { this->name = name; };
	
	void Soldier::setTarget(int target)
	{
		this->target = target;
	}

	void Soldier::takeDamage(int damage)
	{
		currentHp -= damage;
	}

	void Soldier::update(Soldier* soldiers[])
	{
		this->target = target;

		if (currentStamina < staminaAttackCost)
		{
			rest();
		}
		else
		{
			tryAttackText(soldiers[target]->getPos());
			attack(soldiers);
		}
	}
}

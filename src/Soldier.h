#pragma once

#include <iostream>

namespace soldier
{
	class Soldier
	{
	protected:
		std::string name; 
		int pos;
		int hp;
		int currentStamina;
		int maxStamina;
		int staminaAttackCost;
		bool isAlive;
		int damage;
		Soldier* target;

		void tryAttackText(int pos);
		void restText();
		void loseStamina(int amount);
		virtual void landedHitText() = 0;
		virtual void attack() = 0;
		virtual void missedText() = 0;
		virtual void landHit() = 0;
		void rest();
		void recoverStamina();

	public:
		Soldier(int hp, int maxStamina, int staminaAttackCost, int pos, int damage, std::string name);

		std::string getName();
		int getHp();
		int getCurrentStamina();
		int getMaxStamina();
		int getStaminaAttackCost();
		bool getIsAlive();
		int getDamage();
		int getPos();

		void setName(std::string name);

		void takeDamage(int damage);

		void update(Soldier* target);
	};
}


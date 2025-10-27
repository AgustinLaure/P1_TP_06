#pragma once

#include <iostream>

namespace soldier
{
	class Soldier
	{
	protected:
		std::string name; 
		int pos;
		int maxHp;
		int currentHp;
		int currentStamina;
		int maxStamina;
		int staminaAttackCost;
		bool isAlive;
		int damage;
		int target;

		void tryAttackText(int pos);
		void restText();
		void loseStamina(int amount);
		virtual void landedHitText() = 0;
		virtual void attack(Soldier* soldiers[]) = 0;
		virtual void missedText(Soldier* soldiers[]) = 0;
		virtual void landHit(Soldier* soldiers[]) = 0;
		void rest();
		void recoverStamina();
		int getSteps(Soldier* soldiers[]);

	public:
		Soldier(int maxHp, int maxStamina, int staminaAttackCost, int pos, int damage, std::string name);
		virtual ~Soldier();
		std::string getName();
		int getCurrentHp();
		int getMaxHp();
		int getCurrentStamina();
		int getMaxStamina();
		int getStaminaAttackCost();
		bool getIsAlive();
		int getDamage();
		int getPos();
		void setName(std::string name);
		void setTarget(int target);

		void takeDamage(int damage);

		void update(Soldier* soldiers[]);
	};
}


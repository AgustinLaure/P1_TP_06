#pragma once

#include <iostream>

namespace soldier
{
	class Soldier
	{
	private:
		std::string name; 
		int maxHp;
		int currentHp;
		int currentStamina;
		int maxStamina;
		bool isAlive;
		void tryAttackText(int pos);
		void restText();
		void rest();
		void recoverStamina();
	protected:
		int target;
		int staminaAttackCost;
		int pos;
		int damage;

		void loseStamina(int amount);
		int getSteps(Soldier* soldiers[]);
		virtual void landedHitText() = 0;
		virtual void attack(Soldier* soldiers[]) = 0;
		virtual void missedText(Soldier* soldiers[]) = 0;
		virtual void landHit(Soldier* soldiers[]) = 0;

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


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
		int stamina;
		bool isAlive;
		int damage;

	public:
		Soldier(int hp, int stamina, int pos, int damage, std::string name);

		std::string getName();
		int getPos();
		int getHp();
		int getStamina();
		bool getIsAlive();
		int getDamage();

		void setName(std::string name);

		void takeDamage(int damage);

		virtual void attack(Soldier* target) = 0;
		virtual void rest() = 0;

	};
}


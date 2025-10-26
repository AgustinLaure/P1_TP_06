#pragma once

namespace soldier
{
	class Soldier
	{
	protected:
		int pos;
		int hp;
		int stamina;
		bool isAlive;
		int damage;

	public:
		Soldier(int hp, int stamina, int pos, int damage);

		int getHp();
		int getStamina();
		bool getIsAlive();
		int getPos();

		void takeDamage(int damage);

		virtual void attack(Soldier* target) = 0;
		virtual void rest() = 0;

	};
}


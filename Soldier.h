#pragma once

namespace Soldier
{
	class Soldier
	{
	private:
		int pos;
		int hp;
		int stamina;
		bool isAlive;

	public:
		Soldier(int hp, int stamina, int pos);

		int getHp();
		int getStamina();
		void takeDamage(int damage);

		virtual void attack(Soldier* target) = 0;
		virtual void rest() = 0;

	};
}


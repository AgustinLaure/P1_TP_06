#pragma once

namespace Soldier
{
	class Soldier
	{
	private:
		int hp;
		int stamina;

	public:
		Soldier(int hp, int stamina);

		int getHp();
		int getStamina();

		virtual void attack(Soldier* target) = 0;
		virtual void rest() = 0;

	};
}


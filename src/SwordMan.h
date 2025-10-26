#pragma once

#include "MeleeSoldier.h"

namespace swordMan
{
	const int hp = 100;
	const int stamina = 20;
	const int dmg = 10;
	const int attackRadius = 3;

	class SwordMan : public meleeSoldier::MeleeSoldier
	{
	private:
	public:
		SwordMan(int hp, int stamina, int pos, int damage, int attackRadius);
		void attack(Soldier* target) override;
		void rest() override;
	};

}

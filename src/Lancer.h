#pragma once
#include "MeleeSoldier.h"

namespace lancer
{
	const int hp = 10;
	const int stamina = 20;
	const int dmg = 8;
	const int attackRadius = 2;

	class Lancer : public meleeSoldier::MeleeSoldier
	{
	private:
	public:
		Lancer(int hp, int stamina, int pos, int damage, int attackRadius);
		void attack(Soldier* target) override;
		void rest() override;
	};
}


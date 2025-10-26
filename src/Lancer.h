#pragma once
#include "MeleeSoldier.h"

namespace lancer
{
	const int minHp = 80;
	const int maxHp = 100;

	const int minStamina = 15;
	const int maxStamina = 20;

	const int minDmg = 6;
	const int maxDmg = 8;

	const std::string name = "Lancer";

	const int attackRadius = 3;

	class Lancer : public meleeSoldier::MeleeSoldier
	{
	private:
	public:
		Lancer(int hp, int stamina, int pos, int damage, std::string name, int attackRadius);
		void attack(Soldier* target) override;
		void rest() override;
	};
}


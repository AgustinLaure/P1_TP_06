#pragma once
#include "MeleeSoldier.h"

namespace lancer
{
	const int minHp = 50;
	const int maxHp = 80;

	const int minStamina = 15;
	const int maxStamina = 20;

	const int staminaAttackCost = 7;

	const int minDmg = 12;
	const int maxDmg = 15;

	const std::string name = "Lancer";

	const int attackRadius = 3;

	class Lancer : public meleeSoldier::MeleeSoldier
	{
	private:
		int hitAmount;
	public:
		Lancer(int maxHp, int maxStamina, int staminaAttackCost, int pos, int damage, std::string name, int attackRadius);
		~Lancer() override;
		
		void landHit(Soldier* soldiers[]) override;
		void landedHitText() override;
	};
}


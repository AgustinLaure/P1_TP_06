#pragma once

#include "MeleeSoldier.h"

namespace swordMan
{
	const int staminaAttackCost = 10;
	const int staminaRecover = 15;
	
	const int minHp = 80;
	const int maxHp = 100;

	const int minStamina = 15;
	const int maxStamina = 20;

	const int minDmg = 8;
	const int maxDmg = 10;

	const std::string name = "Swordman";

	const int attackRadius = 2;

	class SwordMan : public meleeSoldier::MeleeSoldier
	{
	private:
	public:
		SwordMan(int hp, int maxStamina, int staminaAttackCost, int pos, int damage, std::string name, int attackRadius);
		void landedHitText() override;
		void landHit() override;
	};

}

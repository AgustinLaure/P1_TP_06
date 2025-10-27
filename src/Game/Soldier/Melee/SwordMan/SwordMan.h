#pragma once

#include "Game/Soldier/Melee/MeleeSoldier.h"

namespace swordMan
{
	
	const int minHp = 70;
	const int maxHp = 100;

	const int minStamina = 15;
	const int maxStamina = 20;

	const int staminaAttackCost = 7;

	const int minDmg = 20;
	const int maxDmg = 25;

	const std::string name = "Swordman";

	const int attackRadius = 1;

	class SwordMan : public meleeSoldier::MeleeSoldier
	{
	private:
	public:
		SwordMan(int maxHp, int maxStamina, int staminaAttackCost, int pos, int damage, std::string name, int attackRadius);
		~SwordMan() override;
		
		void landedHitText() override;
		void landHit(Soldier* soldiers[]) override;
	};

}

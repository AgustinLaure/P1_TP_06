#pragma once

#include "Game/Soldier/Soldier.h"

namespace meleeSoldier
{
	class MeleeSoldier : public soldier::Soldier
	{
	private:
		void virtual attack(Soldier* soldiers[]) override;
		int attackRadius;
		void missedText(Soldier* soldiers[]) override;
		
	public:
		MeleeSoldier(int maxHp, int maxStamina, int staminaAttackCost, int pos, int damage, std::string name, int attackRadius);
		virtual ~MeleeSoldier() override;

		int getAttackRadius();
	};
}


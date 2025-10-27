#pragma once

#include "Soldier.h"

namespace meleeSoldier
{
	class MeleeSoldier : public soldier::Soldier
	{
	protected:
		int attackRadius;
		void virtual attack(Soldier* soldiers[]) override;
		
	public:
		MeleeSoldier(int maxHp, int maxStamina, int staminaAttackCost, int pos, int damage, std::string name, int attackRadius);
		int getAttackRadius();

		void missedText(Soldier* soldiers[]) override;
		
	};
}


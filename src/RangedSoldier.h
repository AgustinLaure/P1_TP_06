#pragma once

#include "Soldier.h"

namespace rangedSoldier
{
	class RangedSoldier : public soldier::Soldier
	{
	private:
		int minDistance;
		int maxDistance;
	public:
		RangedSoldier(int maxHp, int maxStamina, int staminaAttackCost, int pos, int damage, std::string name, int minDistance, int maxDistance);
		int getMinDistance();
		int getMaxDistance();

		void attack(Soldier* soldiers[]) override;
		void missedText(Soldier* soldiers[]) override;
		void landedHitText() override;
		void landHit(Soldier* soldiers[]) override;
	};
}

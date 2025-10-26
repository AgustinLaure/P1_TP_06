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
		RangedSoldier(int hp, int maxStamina, int staminaAttackCost, int pos, int damage, std::string name, int minDistance, int maxDistance);
		int getMinDistance();
		int getMaxDistance();

		void attack() override;
		void missedText() override;
		void landedHitText() override;
		void landHit() override;
	};
}

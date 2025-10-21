#pragma once

#include "RangedSoldier.h"

namespace Archer
{
	class Archer : public RangedSoldier::RangedSoldier
	{
	private:

	public:
		void attack(Soldier* target) override;
		void rest() override;
	};
}

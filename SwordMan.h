#pragma once

#include "MeleeSoldier.h"

namespace SwordMan
{
	class SwordMan : public MeleeSoldier::MeleeSoldier
	{
	private:

	public:
		SwordMan(int hp, int stamina, int pos, int damage, int radiusAttack);
		void attack(Soldier* target) override;
		void rest() override;
	};

}

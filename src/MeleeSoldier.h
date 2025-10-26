#pragma once

#include "Soldier.h"

namespace meleeSoldier
{
	class MeleeSoldier : public soldier::Soldier
	{
	protected:
		int attackRadius;
	public:
		MeleeSoldier(int hp, int stamina, int pos, int damage, std::string name, int attackRadius);
		int getAttackRadius();
	};
}


#pragma once

#include "Soldier.h"

namespace MeleeSoldier
{
	class MeleeSoldier : public Soldier::Soldier
	{
		protected:
		int attackRadius;
	public:
		MeleeSoldier(int hp, int stamina, int pos, int damage, int attackRadius);
	};
}


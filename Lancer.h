#pragma once
#include "MeleeSoldier.h"

namespace Lancer
{

class Lancer : public MeleeSoldier::MeleeSoldier
{
private:

	public:
		void attack(Soldier* target) override;
		void rest() override;
};
}


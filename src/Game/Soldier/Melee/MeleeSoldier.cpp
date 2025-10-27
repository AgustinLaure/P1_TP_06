#include "Game/Soldier/Melee/MeleeSoldier.h"

namespace meleeSoldier
{
	void MeleeSoldier::attack(Soldier* soldiers[])
	{
		if (getSteps(soldiers) <= attackRadius)
		{
			landHit(soldiers);

			loseStamina(staminaAttackCost);

			landedHitText();
		}
		else
		{
			missedText(soldiers);
		}
	}

	void MeleeSoldier::missedText(Soldier* soldiers[])
	{
		std::cout << " pero fallo porque el enemigo estaba muy lejos";
	}

	MeleeSoldier::MeleeSoldier(int maxHp, int maxStamina, int staminaAttackCost, int pos, int damage, std::string name, int attackRadius) : Soldier(maxHp, maxStamina, staminaAttackCost, pos, damage, name), attackRadius(attackRadius) {}
	MeleeSoldier::~MeleeSoldier() {}

	int MeleeSoldier::getAttackRadius() { return attackRadius; }
}

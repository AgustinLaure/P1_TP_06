#include "MeleeSoldier.h"

namespace meleeSoldier
{
	MeleeSoldier::MeleeSoldier(int hp, int maxStamina, int staminaAttackCost, int pos, int damage, std::string name, int attackRadius) : Soldier(hp, maxStamina, staminaAttackCost, pos, damage, name), attackRadius(attackRadius) {}
	int MeleeSoldier::getAttackRadius() { return attackRadius; }

	void MeleeSoldier::attack()
	{
		if (abs(pos) - abs(target->getPos()) <= attackRadius)
		{
			landHit();

			loseStamina(staminaAttackCost);
		}
		else
		{
			missedText();
		}
	}

	void MeleeSoldier::missedText()
	{
		std::cout << "pero fallo porque el enemigo estaba muy lejos";
	}
}

#include "SwordMan.h"
#include "Constants.h"

int main()
{

	Soldier::Soldier* array[2] =
	{
		new SwordMan::SwordMan(20,5, 0, GameConstants::swordmanDmg, 2),
		new SwordMan::SwordMan(12,5, 1, GameConstants::swordmanDmg, 2)
	};

	array[0]->attack(array[1]);
}
#include "Random.h"

#include <iostream>

namespace random
{
	int getRandom(int min, int max)
	{
		return rand() % (max - min + 1) + min;
	}
}
#pragma once

#include "Animal.h"

class Spider : public Animal
{
public:
	Spider(int spiderLegs = 8);
	~Spider();

	void eat();
};
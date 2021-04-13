#pragma once

#include "Animal.h"
#include "Pet.h"

class Fish : public Pet, public Animal
{
public:
	Fish();
	Fish(std::string fishName = "");
	~Fish();

	void play();
	void eat();
};
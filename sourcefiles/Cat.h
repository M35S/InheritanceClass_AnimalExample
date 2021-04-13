#pragma once

#include "Animal.h"
#include "Pet.h"

class Cat : public Animal, public Pet
{
public:
	Cat();
	Cat(std::string catName = "", int catLegs = 4);
	~Cat();

	void play();
	void eat();
};
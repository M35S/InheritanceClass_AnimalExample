#include "Fish.h"
#include <iostream>

Fish::Fish() :Animal(legs), Pet(name)
{
	name = "The Fish with no name";
	legs = 0;
}

Fish::Fish(std::string fishName) : Animal(legs), Pet(name)
{
	name = fishName;
	legs = 0;
}

Fish::~Fish()
{
}

void Fish::play()
{
	std::cout << "A fish loves to play in the pond!" << std::endl;
}

void Fish::eat()
{
	std::cout << "A fish loves to eat insects!" << std::endl;
}
#include "Pet.h"
#include <iostream>

Pet::Pet(std::string petName)
{
	name = petName;
	std::cout << "This pet's name is " << name << "." << std::endl;
}

Pet::~Pet()
{
}

std::string Pet::getName() const
{
	return name;
}

void Pet::setName(std::string petName)
{
	name = petName;
}

void Pet::play()
{
	std::cout << "All pets love to play!" << std::endl;
}
#include "Cat.h"
#include <iostream>

Cat::Cat() :Animal(legs), Pet(name)
{
}

Cat::Cat(std::string catName, int catLegs) : Animal(catLegs), Pet(catName)
{
	std::cout << "It is a cat!" << std::endl;
}

Cat::~Cat()
{
}

void Cat::play()
{
	std::cout << "Cats like to play with spiders!";
}

void Cat::eat()
{
	std::cout << "Cat's love to eat fish!";
}
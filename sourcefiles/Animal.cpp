#include "Animal.h"
#include <iostream>

// Constructor (protected member#)
Animal::Animal(int animalLegs)
{
	legs = animalLegs;
	std::cout << "This animal has " << legs << " legs." << std::endl;
}

// Destructor (public member +)
Animal::~Animal()
{
}

// Methods (public members +)
void Animal::walk() 
{
	if (legs = 4)
	{
		std::cout << "Cat's are very agile; they can walk and run.";
	}
	else if (legs = 8)
	{
		std::cout << "This animal is a spider. A spider has " << legs << " legs." << std::endl;
		std::cout << "A spider can walk!";
	}
	else
	{
		std::cout << "This animal is a fish. A fish has " << legs << " legs." << std::endl;
		std::cout << "A fish cannot walk!";
	}
}

void Animal::eat()
{
	std::cout << "All animals love to eat!" << std::endl;
}
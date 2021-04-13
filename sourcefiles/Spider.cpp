#include "Spider.h"
#include <iostream>

Spider::Spider(int spiderLegs) :Animal(spiderLegs)
{
}

Spider::~Spider()
{
}

void Spider::eat()
{
	std::cout << "The spider is eating some flies!" << std::endl;
}
#pragma once

class Animal
{
public:
	~Animal();
	
	void walk();			
	virtual void eat();		

protected:
	Animal(int aLegs = 0);
	
	int legs;
};
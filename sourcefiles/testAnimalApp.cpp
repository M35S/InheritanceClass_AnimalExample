#include <iostream>
#include "Cat.h"
#include "Fish.h"
#include "Spider.h"

void printPet(Pet *pet);
void printAnimal(Animal *animal);

using namespace std;

int main()
{
	Cat cat1{ "Billy"};	// object created, constructor will be called
	printAnimal(&cat1);
	printPet(&cat1);

	//Cat * catPtr = new Cat("Tekir");

	//Spider spider1;
	//Animal * spiderPtr = new Spider();

	//Fish fish1{ "Bobby"};
	//Fish * fishPtr = new Fish();
	//Animal * fishPtr2 = new Fish();

	system("pause");

	return 0;
}

void printPet(Pet *pet)
{
	pet->play();
	cout << endl;
}

void printAnimal(Animal *animal)
{
	animal->walk();
	cout << endl;
	animal->eat();
	cout << endl;
}
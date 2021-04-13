#pragma once

#include <string>

class Pet
{
public:
	~Pet();

	std::string getName() const;
	void setName(std::string name);
	virtual void play();

protected:
	Pet(std::string petName = "");

	std::string name;
};
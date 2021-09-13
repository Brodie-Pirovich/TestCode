#pragma once
#include "Animal.h"
class Dog : public Animal
{
public:
	Dog();
	Dog(string dogName, int dogAge, string dogColor);

public:
	void MakeSound() override;
};


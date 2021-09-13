#pragma once
#include <string>
#include "Animal.h"

using namespace std;

class Cat: public Animal
{
public:
	Cat();
	Cat(string catName, int catAge, string catColor);
public:
	void MakeSound() override;

};


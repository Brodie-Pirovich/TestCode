#include "Dog.h"
#include <iostream>

using namespace std;

Dog::Dog()
{
}

Dog::Dog(string dogName, int dogAge, string dogColor)
{
	name = dogName;
	age = dogAge;
	color = dogColor;
}

void Dog::MakeSound()
{
	cout << name << " barks!" << endl;
}

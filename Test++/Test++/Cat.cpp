#include "Cat.h"
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

Cat::Cat()
{
	age = 0;
	name = "";
}

Cat::Cat(string catName, int catAge, string catColor)
{
	name = catName;
	age = catAge;
	color = catColor;
}

void Cat::MakeSound()
{
	cout << name << " meows!" << endl;
}

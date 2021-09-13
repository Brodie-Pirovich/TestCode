#include "Animal.h"
#include <stdlib.h>
#include <iostream>1

using namespace std;

Animal::Animal()
{
}

Animal::Animal(string m_name, string m_color, int m_age)
{
	name = m_name;
	color = m_color;
	age = m_age;
}

void Animal::MakeSound()
{
}

void Animal::PrintDetails()
{
	cout << name << " is " << age << " years old and is " << color << endl;
}

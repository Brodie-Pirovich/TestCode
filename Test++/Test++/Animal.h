#pragma once
#include<string>

using namespace std;

class Animal
{
public:
	Animal();
	Animal(string m_name, string m_color, int m_age);

public:
	string name;
	string color;
	int age;

public:
	virtual void MakeSound();
	void PrintDetails();
};


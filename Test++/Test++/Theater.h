#pragma once
#include <stdlib.h>
#include <string>

using namespace std;

class Theater
{
public:
	Theater();
	Theater(string movieTitle, string sessionTime);

	string movie;
	string time;
};


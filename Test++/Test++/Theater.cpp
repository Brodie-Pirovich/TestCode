#include "Theater.h"
#include <stdlib.h>
#include <string.h>

Theater::Theater()
{
}

Theater::Theater(string movieTitle, string sessionTime)
{
	movie = movieTitle;
	time = sessionTime;
}

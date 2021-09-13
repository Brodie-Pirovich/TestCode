#include "Game.h"
#include <stdio.h>
#include <stdlib.h>

void PlayGuessingGame()
{
	srand(time(NULL));

	int nRandonNumber = rand() % ((5 + 1) - 1) + 1;
	int guess = 0;
	int count = 0;
	int maxGuesses = 3;
	printf("%d\n", nRandonNumber);

	printf("You have 3 guesses to find the random number!\n");
	scanf("%d", &guess);
	while (count != maxGuesses)
	{
		if (guess == nRandonNumber)
		{
			printf("You have found the random number, well done!\n");
			return;
		}
		else
		{
			printf("That is not the random number, try again!\n");
			count++;

		}
		scanf("%d", &guess);
	}

	printf("Game Over!");
}

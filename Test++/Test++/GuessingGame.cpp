#include "GuessingGame.h"
#include <iostream>

using namespace std;

GuessingGame::GuessingGame(int max)
{
	maxGuesses = max;
}

void GuessingGame::PlayGame()
{
	srand((unsigned)time(0));

	int numbGuesses = 0;
	int guess;
	int number = 1 +(rand() % 5);

	cout << "You have " << maxGuesses << " guesses to find the correct number." << endl;

	while (numbGuesses != maxGuesses)
	{
		cin >> guess;

		if (guess == number)
		{
			cout << "You have guessed correctly, well done!\n" << endl;
			return;
		}
		else
		{
			cout << "You have guessed incorrectly, try again." << endl;
			numbGuesses++;
		}
	}

	cout << "GameOver, the hidden number was " << number << "\n" << endl;
}

using System;
using System.Collections.Generic;
using System.Text;

namespace Test
{
    class GuessingGame
    {
        public int maxGuesses = 3;

        public void PlayGame()
        {
            Random numberGen = new Random();
            int number = numberGen.Next(0, 5);

            Console.WriteLine("You have 3 trys to guess a number between 1 and 5!");

            int guesses = 0;
            while (guesses != maxGuesses)
            {
                int guess = Convert.ToInt32(Console.ReadLine());

                if (guess == number)
                {
                    Console.WriteLine("You have guessed correctly, well done!");
                    return;
                }
                else
                {
                    Console.WriteLine("You have guessed incorrectly, guess again");
                    guesses++;
                }
            }

            Console.WriteLine("Game Over! You have ran out of guesses");
        }

    }
}

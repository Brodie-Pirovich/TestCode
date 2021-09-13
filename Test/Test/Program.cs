using System;
using System.Collections.Generic;
using System.Linq;

namespace Test
{
    class Program
    {
        static void Main(string[] args)
        {
            Menu();
        }

        static void CreateCats(Cat[] cats)
        {
            Cat cat01 = new Cat("Ripley", 3);
            Cat cat02 = new Cat("Tobey", 3);
            Cat cat03 = new Cat("Binks", 1);
            Cat cat04 = new Cat("Olive", 1);

            cats[0] = cat01;
            cats[1] = cat02;
            cats[2] = cat03;
            cats[3] = cat04;


            for (int i = 0; i < cats.Length; i++)
            {
                cats[i].Meow();
            }
        }

        static void TheaterList()
        {
            LinkedList linkedList = new LinkedList();
            Theater theater01 = new Theater("Star Wars", "7:30PM");
            Theater theater02 = new Theater("Terminator", "9:30PM");
            Theater theater03 = new Theater("Predator", "6:30PM");

            linkedList.AddListItem(theater01);
            linkedList.AddListItem(theater02);
            linkedList.AddListItem(theater03);

            linkedList.PrintList();
        }

        static void Menu()
        {
            GuessingGame game = new GuessingGame();
            Cat[] cats = new Cat[4];

            string option;
            Console.WriteLine("MENU! Please select one of the following options: 1.Play guessing game 2.Cat test 3.Theater test 4.Sum Check or press x to exit.");
            option = Console.ReadLine();

            while(option != "x")
            {
                if(option == "1")
                {
                    game.PlayGame();
                }
                else if (option == "2")
                {
                    CreateCats(cats);
                }
                else if(option == "3")
                {
                    TheaterList();
                }
                else if(option == "4")
                {
                    SumCheck();
                }
                else
                {
                    Console.WriteLine("Invalid command, try another");
                }

                Console.WriteLine("MENU! Please select one of the following options: 1.Play guessing game 2. Cat test or press x to exit.");
                option = Console.ReadLine();
            }

        }

        static void SumCheck()
        {
            IEnumerable<int> intNumber = Enumerable.Empty<int>();
            int sum = 0;

            foreach (int number in intNumber)
            {
                sum += number;
            }

            if(sum % 2 == 0)
            {
                Console.WriteLine("Sum is even");
            }
            else
            {
                Console.WriteLine("Sum is odd");
            }
        }
    }
}

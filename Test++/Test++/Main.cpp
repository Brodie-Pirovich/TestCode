#include<stdlib.h>
#include <iostream>
#include <vector>
#include <algorithm>

#include "Main.h"

using namespace std;


int main()
{
	//PlayGuessingGame();
	CreateAnimals();
	/*MovieTheater();
	SearchArray();*/

	return 0;
}

void PlayGuessingGame()
{
	GuessingGame game = GuessingGame(3);
	game.PlayGame();	
}

void CreateAnimals()
{

	std::vector< std::shared_ptr< Animal > > arr(MAX_SIZE);
	arr[0].reset(new Cat("Ripley", 3, "Mix"));
	arr[1].reset(new Cat("Binks", 1, "Black"));
	arr[2].reset(new Cat("Olive", 1, "Mix"));
	arr[3].reset(new Dog("Lola", 10, "Black and white"));

	int size = arr.size();
	for (int i = 0; i < size; i++)
	{
		arr[i].get()->PrintDetails();
		arr[i].get()->MakeSound();
	}
}

void MovieTheater()
{
	LinkedList list = LinkedList();
	Theater theater01 = Theater("Mortal Kombat", "7:30PM");
	Theater theater02 = Theater("Star Wars", "6:30PM");
	Theater theater03 = Theater("Batman", "5:30PM");

	list.AddToList(theater01);
	list.AddToList(theater02);
	list.AddToList(theater03);

	list.PrintList();

}

void SearchArray()
{
	int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
	int asize = sizeof(a) / sizeof(a[0]);
	
	if (binary_search(a, a + asize, 5))
	{
		cout << "The number was not found!" << endl;
	}
	else
	{
		cout << "The number was found!" << endl;
	}
}

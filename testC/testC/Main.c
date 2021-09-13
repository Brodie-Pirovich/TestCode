#include "LinkedList.h"
#include "Game.h"
#include <stdio.h>
#include <stdlib.h>

void animalList();
void CreateAnimals(list_t* list);

int main()
{
	animalList();
	PlayGuessingGame();

	return 0;
}

void animalList()
{
	list_t* myList = createList();
	CreateAnimals(myList);
	printList(myList);
	freeList(myList);
}

void CreateAnimals(list_t* list)
{
	animal_t* cat01 = createAnimal();
	cat01->name = "Ripley";
	cat01->species = CAT;
	cat01->soundFunc = meow;

	animal_t* cat02 = createAnimal();
	cat02->name = "Binks";
	cat02->species = CAT;
	cat02->soundFunc = meow;

	animal_t* cat03 = createAnimal();
	cat03->name = "Olive";
	cat03->species = CAT;
	cat03->soundFunc = meow;

	animal_t* dog01 = createAnimal();
	dog01->name = "Lola";
	dog01->species = DOG;
	dog01->soundFunc = bark;

	addToList(list, *cat01);
	addToList(list, *cat02);
	addToList(list, *cat03);
	addToList(list, *dog01);

}

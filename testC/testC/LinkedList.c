#include "LinkedList.h"
#include <stdlib.h>
#include <stdio.h>

animal_t* createAnimal()
{
	animal_t* newAnimal = (animal_t*)calloc(1, sizeof(animal_t));
	return newAnimal;
}

list_t* createList()
{
	list_t* newList = (list_t*)calloc(1, sizeof(list_t));
	return newList;
}

void printList(list_t* list)
{
	printf("\nThe list contents are: \n");
	list_node_t* current;
	for (current = list->head; current != NULL; current = current->next)
	{
		printf("\n%s\n", current->value.name);
		current->value.soundFunc();
	}
}

void addToList(list_t* list, animal_t command)
{
	list_node_t* newNode = malloc(1 * sizeof(list_node_t));
	newNode->value = command;
	newNode->next = list->head;
	list->head = newNode;
	if (list->size == 0)
	{
		list->tail = newNode;
	}
	list->size++;
}

void freeList(list_t* list)
{
	list_node_t* current, * next;
	current = list->head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	free(list);
}

void deleteFromList(list_t* list)
{
	list_node_t* current;
	current = list->head;
	list->head = list->head->next;

	free(current);
	list->size--;
}

void bark()
{
	printf("Bark!\n");
}

void meow()
{
	printf("Meow!\n");
}

#pragma once

typedef enum
{
    CAT, DOG, OTHER
} SPECIES;

typedef void (*func)();

typedef struct Animal
{
    SPECIES species;
    char* name;
    func soundFunc;
}animal_t;

typedef struct ListNode
{
    animal_t value;
	struct ListNode* next;
}list_node_t;

typedef struct List
{
    list_node_t* head;
    list_node_t* tail;
    int size;
}list_t;

animal_t* createAnimal();
list_t* createList();
void printList(list_t* list);
void addToList(list_t* list, animal_t command);
void freeList(list_t* list);
void deleteFromList(list_t* list);
void bark();
void meow();
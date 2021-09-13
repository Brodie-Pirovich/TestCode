#pragma once
#include "LinkedListNode.h"
#include "Theater.h"
#define SIZE 0

class LinkedList
{
public:
	LinkedList();
	LinkedListNode* head;
	LinkedListNode* tail;
	int size;

	void PrintList();
	void AddToList(Theater item);
	void DeleteFromList();
};


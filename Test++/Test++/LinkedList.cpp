#include "LinkedList.h"
#include <iostream>

using namespace std;

LinkedList::LinkedList()
{
	size = SIZE;
}

void LinkedList::PrintList()
{
	cout << "\nThe list contains..." << endl;
	LinkedListNode* current;
	for (current = head; current != NULL; current = current->next)
	{
		cout << current->value.movie << " " << current->value.time << endl;
	}
}

void LinkedList::AddToList(Theater item)
{
	LinkedListNode* newItem = new LinkedListNode();
	newItem->value = item;
	newItem->next = head;
	head = newItem;

	if (size == 0)
	{
		tail = newItem;
	}

	size++;
}

void LinkedList::DeleteFromList()
{
	LinkedListNode* current;
	current = head;
	head = head->next;
	size--;
}

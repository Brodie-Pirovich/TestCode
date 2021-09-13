using System;
using System.Collections.Generic;
using System.Text;

namespace Test
{
    class LinkedList
    {
        public LinkedListNode head;
        public LinkedListNode tail;
        private int size;

        public void PrintList()
        {
            Console.WriteLine("The list contains...");
            LinkedListNode current = new LinkedListNode();
            for(current = head; current!= null; current = current.next)
            {
                current.value.printTheater();
            }
        }

        public void AddListItem(Theater item)
        {
            LinkedListNode newNode = new LinkedListNode();
            newNode.value = item;
            newNode.next = head;
            head = newNode;
            if (size == 0)
            {
                tail = newNode;
            }

            size++;
        }

        public void DeleteFromList()
        {
            LinkedListNode current = new LinkedListNode();
            current = head;
            head = head.next;
            size--;
        }

    }
}

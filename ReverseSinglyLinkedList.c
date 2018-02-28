/*

#########################
#                       #
#        OMANSAK        #
#                       #
#########################

Reverse A Singly Linked List

*/

#include <stdio.h>
#include <stdlib.h>

struct LinkedList
{
	int Item;
	struct LinkedList *Next;
};

typedef struct LinkedList *xList; // All Xlist's variables are Pointer from now.

xList GetNode()
{
	xList p;
	p = (struct LinkedList*)malloc(sizeof(struct LinkedList));
	return(p);
}

void InsertAfter(xList Ptr, int pItem)
{
	xList newPtr;
	if (Ptr == NULL)
	{
		printf("List is empty.");
	}
	else
	{
		newPtr = GetNode();
		newPtr->Item = pItem;
		newPtr->Next = Ptr->Next;
		Ptr->Next = newPtr;

	}


}

void Display(xList Ptr)
{
	for (xList q = Ptr->Next; q != NULL; q = q->Next)
	{
		printf("[%p]-[%p] \t:\t %d \n", q, q->Next, q->Item);
	}
}

void Reverse(xList Ptr)
{
	xList ClonePtr = Ptr->Next;
	xList Temp;
	if (Ptr == NULL)
	{
		printf("List is empty.");
	}
	else {
		xList newClone = GetNode();
		newClone->Item = ClonePtr->Item;
		newClone->Next = NULL;
		Temp = newClone;

		for (xList i = ClonePtr->Next; i != NULL; i = i->Next)
		{
			newClone = GetNode();
			newClone->Item = i->Item;
			newClone->Next = Temp;
			Temp = newClone;
		}


		Ptr->Next = Temp;
	}
}
main()
{
;
	getch();
}

///*
//
//#########################
//#                       #
//#        OMANSAK        #
//#                       #
//#########################
//
//Doubly Linked List  : https://www.tutorialspoint.com/data_structures_algorithms/doubly_linked_list_algorithm.htm
//
//*/
//
//#include <stdio.h>
//#include <stdlib.h>
//
//struct DoublyLinkedList {
//	int Item;
//	struct DoublyLinkedList *Right, *Left;
//};
//
//typedef struct DoublyLinkedList *xList; // All Xlist's variables are Pointer from now.
//
//xList GetNode()
//{
//	xList p;
//	p = (struct DoublyLinkedList*)malloc(sizeof(struct DoublyLinkedList));
//	return p;
//}
//
//void InsertRight(xList Ptr, int Value)
//{
//	xList q,r;
//	if (Ptr->Right == NULL)
//	{
//		puts("List is empty. Adding first element.");
//		q = GetNode();
//		q->Item = Value;
//		q->Left = NULL;
//		Ptr->Right = q;
//		Ptr->Left = q;
//
//	}
//	else
//	{
//		q = GetNode();
//		q->Item = Value;
//		r = Ptr->Right;
//		r->Right = q;
//		q->Left = r;
//		q->Right = NULL;
//		Ptr->Right = q;
//	}
//}
//void InsertLeft(xList Ptr, int Value)
//{
//	xList q, l;
//	if (Ptr->Left == NULL)
//	{
//		puts("List is empty. Adding first element.");
//		q = GetNode();
//		q->Item = Value;
//		q->Left = NULL;
//		Ptr->Left = q;
//		Ptr->Right = q;
//
//	}
//	else
//	{
//		q = GetNode();
//		q->Item = Value;
//		l = Ptr->Left;
//		l->Left = q;
//		q->Right = Ptr->Left;
//		q->Left = NULL;
//		Ptr->Left = q;
//
//	}
//}
//void DeleteRight(xList Ptr, int *Value)
//{
//	if (Ptr == NULL)
//	{
//		puts("List is empty.");
//	}
//	else
//	{
//		xList q = Ptr->Right;
//		*(Value) = q->Item;
//		q->Left->Right = NULL;
//		Ptr->Right = q->Left;
//	}
//}
//void DeleteLeft(xList Ptr, int *Value)
//{
//	if (Ptr == NULL)
//	{
//		puts("List is empty.");
//	}
//	else
//	{
//		xList q = Ptr->Left;
//		*(Value) = q->Item;
//		q->Right->Left = NULL;
//		Ptr->Left = q->Right;
//	}
//}
//void DisplayRightToLeft(xList Ptr)
//{
//	xList Clone = Ptr->Right;
//	for (xList i = Clone; i != NULL; i = i->Left)
//	{
//		printf("[%p] \t [%d] \t [%p]\n", i->Left, i->Item, i->Right);
//	}
//
//}
//
//void DisplayLeftToRight(xList Ptr)
//{
//	xList Clone = Ptr->Left;
//	for (xList i = Clone; i != NULL; i = i->Right)
//	{
//		printf("[%p] \t [%d] \t [%p]\n", i->Right, i->Item, i->Left);
//	}
//
//}
//main()
//{
//	xList Head = GetNode();
//	Head->Left = NULL;
//	Head->Right = NULL;
//	Head->Item = NULL;
//
//	puts(" INSERT ");
//	InsertRight(Head, 1);
//	InsertRight(Head, 11);
//	InsertRight(Head, 111);
//
//	InsertLeft(Head, 2);
//	InsertLeft(Head, 22);
//	InsertLeft(Head, 222);
//
//	puts("# Display #");
//	DisplayRightToLeft(Head);
//	puts(" ");
//	DisplayLeftToRight(Head);
//	puts("# Display #");
//
//	puts(" DELETE ");
//	int deletingValue;
//	DeleteRight(Head, &deletingValue);
//	printf("%d has been deleted.\n", deletingValue);
//
//	DeleteLeft(Head, &deletingValue);
//	printf("%d has been deleted.\n", deletingValue);
//
//	puts("# Display #");
//	DisplayRightToLeft(Head);
//	puts(" ");
//	DisplayLeftToRight(Head);
//	puts("# Display #");
//
//	getch();
//
//}
///*
//
//#########################
//#                       #
//#        OMANSAK        #
//#                       #
//#########################
//
// Stack to Linked List
//
//*/
//
//#include <stdio.h>
//#include <stdlib.h>
//#define STACKSIZE 10
//
//struct LinkedList
//{
//	int Item;
//	struct LinkedList *Next;
//};
//struct Stack {
//	int Top;
//	int Item[STACKSIZE];
//};
//
//typedef struct LinkedList *xList; // All Xlist's variables are Pointer from now.
//
//xList GetNode()
//{
//	xList p;
//	p = (struct LinkedList*)malloc(sizeof(struct LinkedList));
//	return(p);
//}
//
//void InsertAfter(xList Ptr, int pItem)
//{
//	xList newPtr;
//	if (Ptr == NULL)
//	{
//		printf("List is empty.");
//	}
//	else
//	{
//		newPtr = GetNode();
//		newPtr->Item = pItem;
//		newPtr->Next = Ptr->Next;
//		Ptr->Next = newPtr;
//
//	}
//
//
//}
//void DisplayList(xList Ptr)
//{
//	for (xList q = Ptr->Next; q != NULL; q = q->Next)
//	{
//		printf("[%p]-[%p] \t:\t %d \n", q, q->Next, q->Item);
//	}
//}
//
//
//int Empty(struct Stack *Ptr)
//{
//	if (Ptr->Top == -1)
//		return 1;//True
//	else
//		return 0;//False
//}
//void Push(struct Stack *Ptr, int Value)
//{
//	if (Ptr->Top == STACKSIZE - 1)
//	{
//		puts("Stack is full.");
//	}
//	else
//	{
//		Ptr->Item[++Ptr->Top] = Value;
//
//	}
//}
//void DisplayStack(struct Stack *Ptr)
//{
//	struct Stack *Clone = Ptr;
//	if (Empty(Clone))
//		puts("Stack is empty.");
//	else
//		for (int i = Ptr->Top; i > -1; i--)
//		{
//			printf("[%d] \t:\t %d \n", i + 1, Clone->Item[i]);
//		}
//
//}
//
//
//main()
//{
//
//	struct Stack *_Stack = (struct Stack*)malloc(sizeof(struct Stack));;
//	_Stack->Top = -1;
//	for (int i = 0; i < 10; i++)
//	{
//		Push(_Stack, i);
//	}
//	puts(" # Stack #");
//	DisplayStack(_Stack);
//	puts(" # # #");
//	xList Head = GetNode();
//	Head->Item = NULL;
//	Head->Next = NULL;
//
//	for (_Stack->Top; _Stack->Top > -1; _Stack->Top--)
//	{
//		InsertAfter(Head, _Stack->Item[_Stack->Top]);
//	}
//	puts(" # Linked List #");
//	DisplayList(Head);
//	puts(" # # #");
//	getch();
//}

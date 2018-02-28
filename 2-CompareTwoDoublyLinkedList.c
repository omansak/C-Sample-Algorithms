///*
//
//#########################
//#                       #
//#        OMANSAK        #
//#                       #
//#########################
//
//Compare Two Doubly Linked List
//
//*/
//
//#include <stdio.h>
//#include <stdlib.h>
//
//struct DoublyLinkedList {
//	char *Item;
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
//void InsertRight(xList Ptr, char *Value)
//{
//	xList q, r;
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
//
//void MixTwoList(xList Ptr, xList Ptr1, xList Ptr2)
//{
//	xList Clone = Ptr1->Right;
//	xList Clone2 = Ptr2->Right;
//	xList j = Clone2;
//	xList i = Clone;
//	for (; i != NULL, j != NULL; i = i->Left, j = j->Left)
//	{
//		InsertRight(Ptr, i->Item);
//		InsertRight(Ptr, j->Item);
//	}
//
//}
//
//void Compare(xList Ptr)
//{
//	int swapped;
//	xList i= Ptr->Right;
//	do
//	{
//		swapped = 0;
//		i = Ptr->Right;
//		while (i->Left != NULL)
//		{
//			if (strcmp(i->Item, i->Left->Item) > 0)
//			{
//				char  *temp = i->Item;
//				i->Item = i->Left->Item;
//				i->Left->Item = temp;
//				swapped = 1;
//			}
//			i = i->Left;
//		}
//	} while (swapped);
//}
//
//void Display(xList Ptr)
//{
//	xList Clone = Ptr->Right;
//	for (xList i = Clone; i != NULL; i = i->Left)
//	{
//		printf("[%p] \t [%s] \t [%p]\n", i->Left, i->Item, i->Right);
//	}
//
//}
//
//main()
//{
//	xList Head1 = GetNode();
//	Head1->Left = NULL;
//	Head1->Right = NULL;
//	Head1->Item = NULL;
//
//	puts(" INSERT  1 ");
//	InsertRight(Head1, "bbb");
//	InsertRight(Head1, "b");
//	InsertRight(Head1, "bb");
//	InsertRight(Head1, "bbbbb");
//	InsertRight(Head1, "bbbb");
//
//	puts("# Display 1 #");
//	Display(Head1);
//	puts("# Display 1 #");
//
//	xList Head2 = GetNode();
//	Head2->Left = NULL;
//	Head2->Right = NULL;
//	Head2->Item = NULL;
//
//	InsertRight(Head2, "a");
//	InsertRight(Head2, "aaaa");
//	InsertRight(Head2, "aa");
//	InsertRight(Head2, "aaaaa");
//	InsertRight(Head2, "aaa");
//
//	puts("# Display 2 #");
//	Display(Head2);
//	puts("# Display 2 #");
//
//	xList Head = GetNode();
//	Head->Left = NULL;
//	Head->Right = NULL;
//	Head->Item = NULL;
//
//	MixTwoList(Head, Head1, Head2);//Kaynaþtýrma
//
//	puts("# Display Mix #");
//	Display(Head);
//	puts("# Display Mix #");
//
//	Compare(Head);//Sýralama
//
//	puts("# Display Compare #");
//	Display(Head);
//	puts("# Display Compare #");
//
//	getch();
//
//}
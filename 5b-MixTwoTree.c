////
/////*
////
////#########################
////#                       #
////#        OMANSAK        #
////#                       #
////#########################
////
////Tree (Lower is Left,Higher is Right) : https://www.tutorialspoint.com/data_structures_algorithms/tree_data_structure.htm
////
////*/
////
////
////#include <stdio.h>
////#include <stdlib.h>
////
/////*
////
////Tree Codes
////*/
////struct Tree
////{
////	int Item;
////	struct Tree *LeftChild, *RightChild;
////};
////typedef struct Tree *xTree;
////xTree GetNode()
////{
////	xTree p;
////	p = (struct Tree*)malloc(sizeof(struct Tree));
////	return p;
////}
////void SetRight(xTree Ptr, int Value)
////{
////	if (Ptr == NULL)
////	{
////		puts("Tree is empty");
////	}
////	else if (Ptr->Item == NULL)
////	{
////		puts("Child is empty");
////	}
////	else
////	{
////		xTree q;
////		q = GetNode();
////		q->Item = Value;
////		q->LeftChild = NULL;
////		q->RightChild = NULL;
////
////		Ptr->RightChild = q;
////	}
////}
////void SetLeft(xTree Ptr, int Value)
////{
////	if (Ptr == NULL)
////	{
////		puts("Tree is empty");
////	}
////	else if (Ptr->Item == NULL)
////	{
////		puts("Child is empty");
////	}
////	else
////	{
////		xTree q;
////		q = GetNode();
////		q->Item = Value;
////		q->LeftChild = NULL;
////		q->RightChild = NULL;
////
////		Ptr->LeftChild = q;
////	}
////}
////void Insert(xTree Ptr, int Value)
////{
////	Ptr just store Tree Root.
////
////	xTree Temp1, Temp2;
////	Temp1 = Temp2 = Ptr;
////	We should set Last Child(Null Child) to Temp1 
////	while (Temp2 != NULL && (Value != Temp1->Item))
////	{
////		Temp1 = Temp2;
////		if (Value > Temp1->Item)
////		{
////			Temp2 = Temp1->RightChild;
////		}
////		else
////		{
////			Temp2 = Temp1->LeftChild;
////		}
////	}
////
////	if (Value > Temp1->Item)
////		SetRight(Temp1, Value);
////	else if (Value < Temp1->Item)
////		SetLeft(Temp1, Value);
////	else if (Value == Temp1->Item)
////		puts("Same Elements");
////
////}
////void Display_DLR(xTree Ptr)
////{
////	if (Ptr != NULL)
////	{
////		printf("[%d] ", Ptr->Item);
////		Display_DLR(Ptr->LeftChild);
////		Display_DLR(Ptr->RightChild);
////	}
////}
////void Display_LDR(xTree Ptr)
////{
////	if (Ptr != NULL)
////	{
////		Display_LDR(Ptr->LeftChild);
////		printf("[%d] ", Ptr->Item);
////		Display_LDR(Ptr->RightChild);
////	}
////}
////void Display_LRD(xTree Ptr)
////{
////	if (Ptr != NULL)
////	{
////		Display_LRD(Ptr->LeftChild);
////		Display_LRD(Ptr->RightChild);
////		printf("[%d] ", Ptr->Item);
////	}
////}
/////*
////-----
////*/
////
////int Values[100];//it can be linked list
////int Top = -1;
////
////
////void InsertToList(xTree Ptr)
////{
////	Using DLR Method
////
////	if (Ptr != NULL)
////	{
////		Top++;
////		Values[Top] = Ptr->Item;
////		InsertToList(Ptr->LeftChild);
////		InsertToList(Ptr->RightChild);
////	}
////}
////
////main()
////{
////	/*
////
////	Tree 1
////
////	*/
////	puts("");
////	puts("\n -Tree 1- \n");
////	xTree Root1;
////	Root1 = GetNode();
////	Root1->Item = 5; // Tree's First item
////	Root1->LeftChild = NULL;
////	Root1->RightChild = NULL;
////
////	Insert(Root1, 2);
////	Insert(Root1, 4);
////	Insert(Root1, 11);
////	Insert(Root1, 17);
////	Insert(Root1, 16);
////	Insert(Root1, 21);
////	Insert(Root1, 25);
////	Insert(Root1, 28);
////	Insert(Root1, 32);
////
////
////	puts("\n # DLR ROOT 1 # \n ");
////	Display_DLR(Root1);
////
////	puts("\n  # LDR ROOT 1 #\n  ");
////	Display_LDR(Root1);
////
////	puts("\n  # LRD ROOT 1 # \n  ");
////	Display_LRD(Root1);
////
////	/*
////
////	Tree 2
////
////	*/
////	puts("");
////	puts("\n -Tree 2- \n");
////	xTree Root2;
////	Root2 = GetNode();
////	Root2->Item = 7; // Tree's First item
////	Root2->LeftChild = NULL;
////	Root2->RightChild = NULL;
////
////	Insert(Root2, 3);
////	Insert(Root2, 4);
////	Insert(Root2, 5);
////	Insert(Root2, 9);
////	Insert(Root2, 11);
////	Insert(Root2, 10);
////	Insert(Root2, 22);
////	Insert(Root2, 25);
////	Insert(Root2, 31);
////	Insert(Root2, 35);
////
////	puts("\n # DLR ROOT 2 # \n ");
////	Display_DLR(Root2);
////
////	puts("\n  # LDR ROOT 2 #\n  ");
////	Display_LDR(Root2);
////
////	puts("\n  # LRD ROOT 2 # \n  ");
////	Display_LRD(Root2);
////
////	/*
////
////	Combine Tree1 + Tree2 on New A Tree
////
////	*/
////	puts("");
////	puts("\n -Tree Mix- \n");
////
////	InsertToList(Root1);//Add Children on squence
////	InsertToList(Root2);//Add Children on squence
////
////	xTree RootMix;
////	RootMix = GetNode();
////	RootMix->Item = Values[0]; // RootMix's First item
////	RootMix->LeftChild = NULL;
////	RootMix->RightChild = NULL;
////	printf("%d", Top);
////	for (int i = 1; i <= Top; i++)
////	{
////		Insert(RootMix, Values[i]);
////	}
////
////
////	puts("\n # DLR ROOT MIX # \n ");
////	Display_DLR(RootMix);
////
////	puts("\n  # LDR ROOT MIX #\n  ");
////	Display_LDR(RootMix);
////
////	puts("\n  # LRD ROOT MIX # \n  ");
////	Display_LRD(RootMix);
////
////	getch();
////
////}
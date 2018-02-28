//
///*
//
//#########################
//#                       #
//#        OMANSAK        #
//#                       #
//#########################
//
//Tree (Lower is Left,Higher is Right) : https://www.tutorialspoint.com/data_structures_algorithms/tree_data_structure.htm
//
//*/
//
//
//#include <stdio.h>
//#include <stdlib.h>
//
//struct Tree
//{
//	int Item;
//	struct Tree *LeftChild, *RightChild;
//};
//typedef struct Tree *xTree;
//xTree GetNode()
//{
//	xTree p;
//	p = (struct Tree*)malloc(sizeof(struct Tree));
//	return p;
//}
//void SetRight(xTree Ptr, int Value)
//{
//	if (Ptr == NULL)
//	{
//		puts("Tree is empty");
//	}
//	else if (Ptr->Item == NULL)
//	{
//		puts("Child is empty");
//	}
//	else
//	{
//		xTree q;
//		q = GetNode();
//		q->Item = Value;
//		q->LeftChild = NULL;
//		q->RightChild = NULL;
//
//		Ptr->RightChild = q;
//	}
//}
//void SetLeft(xTree Ptr, int Value)
//{
//	if (Ptr == NULL)
//	{
//		puts("Tree is empty");
//	}
//	else if (Ptr->Item == NULL)
//	{
//		puts("Child is empty");
//	}
//	else
//	{
//		xTree q;
//		q = GetNode();
//		q->Item = Value;
//		q->LeftChild = NULL;
//		q->RightChild = NULL;
//
//		Ptr->LeftChild = q;
//	}
//}
//void Insert(xTree Ptr, int Value)
//{
//	//Ptr just store Tree Root.
//
//	xTree Temp1, Temp2;
//	Temp1 = Temp2 = Ptr;
//
//	//We should set Last Child(Null Child) to Temp1 
//	while (Temp2 != NULL && (Value != Temp1->Item))
//	{
//		Temp1 = Temp2;
//		if (Value > Temp1->Item)
//		{
//			Temp2 = Temp1->RightChild;
//		}
//		else
//		{
//			Temp2 = Temp1->LeftChild;
//		}
//	}
//
//	if (Value > Temp1->Item)
//		SetRight(Temp1, Value);
//	else if (Value < Temp1->Item)
//		SetLeft(Temp1, Value);
//	else if (Value == Temp1->Item)
//		puts("Same Elements");
//
//}
//int Top = -1;
//int FindTreeSize(xTree Ptr)
//{
//	int Size = 0;
//	if (Ptr != NULL)
//	{
//		Size++;
//		Size += FindTreeSize(Ptr->LeftChild);
//		Size += FindTreeSize(Ptr->RightChild);
//	}
//	return Size;
//}
//void toStack_LDR(xTree Ptr, int *Stack)
//{
//	if (Ptr != NULL)
//	{
//
//		toStack_LDR(Ptr->LeftChild, Stack);
//		Top++;
//		Stack[Top] = Ptr->Item;
//		toStack_LDR(Ptr->RightChild, Stack);
//	}
//}
//
//main()
//{
//	xTree Root;
//	Root = GetNode();
//	Root->Item = 5; // Tree's First item
//	Root->LeftChild = NULL;
//	Root->RightChild = NULL;
//
//	Insert(Root, 2);
//	Insert(Root, 4);
//	Insert(Root, 3);
//	Insert(Root, 11);
//
//
//	puts("\n # Find Size # \n ");
//	int Size = FindTreeSize(Root);
//	printf("Size = %d \n", Size);
//	int *Stack = (int*)malloc(sizeof(int)*Size);
//	toStack_LDR(Root, Stack);
//
//	int *Clone = Stack;
//	for (int i = Top; i > -1; i--)
//	{
//		printf("[%d] \t:\t %d \n", i + 1, Clone[i]);
//	}
//
//	getch();
//
//}
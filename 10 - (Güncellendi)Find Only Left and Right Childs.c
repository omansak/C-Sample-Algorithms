//
///*
//
//#########################
//#                       #
//#        OMANSAK        #
//#                       #
//#########################
//*/
//
//int Sum = 0, Count = 0;
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
//FindLefts(xTree Ptr)
//{
//	if (Ptr->LeftChild != NULL)
//	{
//		printf(" %d ", Ptr->LeftChild->Item);
//		FindLefts(Ptr->LeftChild);
//	}
//	if (Ptr->RightChild != NULL)
//	{
//		FindLefts(Ptr->RightChild);
//	}
//
//}
//FindRights(xTree Ptr)
//{
//	if (Ptr->RightChild != NULL)
//	{
//		printf(" %d ", Ptr->RightChild->Item);
//		FindRights(Ptr->RightChild);
//	}
//	if (Ptr->LeftChild != NULL)
//	{
//		FindRights(Ptr->LeftChild);
//	}
//
//}
//
//main()
//{
//	xTree Root;
//	Root = GetNode();
//	Root->Item = 6; // Tree's First item
//	Root->LeftChild = NULL;
//	Root->RightChild = NULL;
//
//	Insert(Root, 2);
//	Insert(Root, 4);
//	Insert(Root, 1);
//	Insert(Root, 7);
//
//	puts("\n # Left Childs # \n ");
//	FindLefts(Root);
//
//	puts("\n # Rights Childs # \n ");
//	FindRights(Root);
//
//	getch();
//
//}
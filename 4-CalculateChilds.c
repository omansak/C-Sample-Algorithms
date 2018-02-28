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
//
////Tree Codes
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
//void Display_DLR(xTree Ptr)
//{
//	if (Ptr != NULL)
//	{
//		printf("[%d] ", Ptr->Item);
//		Display_DLR(Ptr->LeftChild);
//		Display_DLR(Ptr->RightChild);
//	}
//}
//void Display_LDR(xTree Ptr)
//{
//	if (Ptr != NULL)
//	{
//		Display_LDR(Ptr->LeftChild);
//		printf("[%d] ", Ptr->Item);
//		Display_LDR(Ptr->RightChild);
//	}
//}
//void Display_LRD(xTree Ptr)
//{
//	if (Ptr != NULL)
//	{
//		Display_LRD(Ptr->LeftChild);
//		Display_LRD(Ptr->RightChild);
//		printf("[%d] ", Ptr->Item);
//	}
//}
//
////Calculate Codes
//// Source : http://stackoverflow.com/questions/5381631/counting-left-child-nodes-in-a-tree
//int CalculateLeft(xTree Ptr)
//{
//	int i = 0;
//	if (Ptr != NULL)
//	{
//		if (Ptr->LeftChild != NULL)
//		{
//			i++;//First Left 
//			i += CalculateLeft(Ptr->LeftChild);
//		}
//		if (Ptr->RightChild != NULL)
//		{
//			i += CalculateLeft(Ptr->RightChild);
//		}
//	}
//	return i;
//}
//int CalculateRight(xTree Ptr)
//{
//	int i = 0;
//	if (Ptr != NULL)
//	{
//		if (Ptr->RightChild != NULL)
//		{
//			i++;//First Left 
//			i += CalculateRight(Ptr->RightChild);
//		}
//		if (Ptr->LeftChild != NULL)
//		{
//			i += CalculateRight(Ptr->LeftChild);
//		}
//	}
//
//
//	return i;
//}
//
//main()
//{
//	xTree Root;
//	Root = GetNode();
//	Root->Item = 15; // Tree's First item
//	Root->LeftChild = NULL;
//	Root->RightChild = NULL;
//	Insert(Root, 7);
//	Insert(Root, 5);
//	Insert(Root, 4);
//	Insert(Root, 6);
//	Insert(Root, 2);
//	Insert(Root, 3);
//	Insert(Root, 16);
//	Insert(Root, 21);
//	Insert(Root, 17);
//	Insert(Root, 28);
//	Insert(Root, 25);
//
//	puts("\n # DLR # \n ");
//	Display_DLR(Root);
//
//	puts("\n  # LDR #\n  ");
//	Display_LDR(Root);
//
//	puts("\n  # LRD # \n  ");
//	Display_LRD(Root);
//
//
//	puts("\n  # Calculate# \n  ");
//	printf("Left : %d \t Right : %d \t Total :%d", CalculateLeft(Root),CalculateRight(Root), CalculateLeft(Root)+CalculateRight(Root));
//
//	getch();
//
//}
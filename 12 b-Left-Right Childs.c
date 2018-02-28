//
///*
//
//#########################
//#                       #
//#        OMANSAK        #
//#                       #
//#########################
//*/
////Sadece Sol Kollarý yada Sag Kollarý alýr
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
//int Sum_Lefts(xTree Ptr)
//{
//	int c = 0;
//	if (Ptr->LeftChild != NULL)
//	{
//		c += Ptr->LeftChild->Item;
//		c += Sum_Lefts(Ptr->LeftChild);
//	}
//	if (Ptr->RightChild != NULL)
//	{
//		c += Sum_Lefts(Ptr->RightChild);
//	}
//
//	return c;
//}
//
//int Sum_Rights(xTree Ptr)
//{
//	int c = 0;
//	if (Ptr->RightChild != NULL)
//	{
//		c += Ptr->RightChild->Item;
//		c += Sum_Rights(Ptr->RightChild);
//	}
//	if (Ptr->LeftChild != NULL)
//	{
//		c += Sum_Rights(Ptr->LeftChild);
//	}
//
//	return c;
//}
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
//	puts("\n # Left Childs Sum # \n ");
//	int Left = Sum_Lefts(Root);
//	printf("%d\t\n", Left);
//
//	puts("\n # Right Childs Sum # \n ");
//	int Right = Sum_Rights(Root);
//	printf("%d\t\n", Right);
//
//	puts("\n # Left-Right  # \n ");
//	printf("%d\t\n", Left - Right);
//
//	getch();
//
//}
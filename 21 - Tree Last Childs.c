
/*

#########################
#                       #
#        OMANSAK        #
#                       #
#########################

Tree (Lower is Left,Higher is Right) : https://www.tutorialspoint.com/data_structures_algorithms/tree_data_structure.htm

*/


#include <stdio.h>
#include <stdlib.h>

struct Tree
{
	int Item;
	struct Tree *LeftChild, *RightChild;
};
typedef struct Tree *xTree;
xTree GetNode()
{
	xTree p;
	p = (struct Tree*)malloc(sizeof(struct Tree));
	return p;
}
void SetRight(xTree Ptr, int Value)
{
	if (Ptr == NULL)
	{
		puts("Tree is empty");
	}
	else if (Ptr->Item == NULL)
	{
		puts("Child is empty");
	}
	else
	{
		xTree q;
		q = GetNode();
		q->Item = Value;
		q->LeftChild = NULL;
		q->RightChild = NULL;

		Ptr->RightChild = q;
	}
}
void SetLeft(xTree Ptr, int Value)
{
	if (Ptr == NULL)
	{
		puts("Tree is empty");
	}
	else if (Ptr->Item == NULL)
	{
		puts("Child is empty");
	}
	else
	{
		xTree q;
		q = GetNode();
		q->Item = Value;
		q->LeftChild = NULL;
		q->RightChild = NULL;

		Ptr->LeftChild = q;
	}
}
void Insert(xTree Ptr, int Value)
{
	//Ptr just store Tree Root.

	xTree Temp1, Temp2;
	Temp1 = Temp2 = Ptr;

	//We should set Last Child(Null Child) to Temp1 
	while (Temp2 != NULL && (Value != Temp1->Item))
	{
		Temp1 = Temp2;
		if (Value > Temp1->Item)
		{
			Temp2 = Temp1->RightChild;
		}
		else
		{
			Temp2 = Temp1->LeftChild;
		}
	}

	if (Value > Temp1->Item)
		SetRight(Temp1, Value);
	else if (Value < Temp1->Item)
		SetLeft(Temp1, Value);
	else if (Value == Temp1->Item)
		puts("Same Elements");

}
void LastChilds(xTree Ptr)
{
	if (Ptr != NULL)
	{
		LastChilds(Ptr->LeftChild);
		LastChilds(Ptr->RightChild);
		if (Ptr->LeftChild == NULL && Ptr->RightChild == NULL)
		{
			printf("[%d] ", Ptr->Item);
		}

	}




}
main()
{
	xTree Root;
	Root = GetNode();
	Root->Item = 5; // Tree's First item
	Root->LeftChild = NULL;
	Root->RightChild = NULL;

	Insert(Root, 2);
	Insert(Root, 4);
	Insert(Root, 3);
	Insert(Root, 5);
	Insert(Root, 11);
	Insert(Root, 17);
	Insert(Root, 16);
	Insert(Root, 21);
	Insert(Root, 25);
	Insert(Root, 22);
	Insert(Root, 28);
	Insert(Root, 32);


	puts("\n # DLR # \n ");
	LastChilds(Root);

	getch();

}
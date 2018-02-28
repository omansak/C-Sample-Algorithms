#include <stdio.h>
#include <stdlib.h>

struct List {
	int Value;
	struct List *Next;
};

typedef struct List *xList;

xList GetNode()
{
	xList p;
	p = (struct List*)malloc(sizeof(struct List));
	return p;
}

void Insert(xList Ptr, int pItem)
{
	xList newPtr;
	if (Ptr == NULL)
	{
		printf("List is empty.");
	}
	else
	{
		newPtr = GetNode();
		newPtr->Value = pItem;
		newPtr->Next = Ptr->Next;
		Ptr->Next = newPtr;
	}
}
xList Foo(int *Matrix, int R, int C)
{
	xList Head = GetNode();
	Head->Next = NULL;
	Head->Value = NULL;
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			Insert(Head, Matrix[(i*C) + j]);
		}
	}
	return Head;
}
main()
{
	int *Matrix[2][3] = { {3,5,2} ,{1,2,4} };
	xList Root = Foo(Matrix, 2, 3);

	for (xList q = Root->Next; q != NULL; q = q->Next)
	{
		printf("[%p]-[%p] \t:\t %d \n", q, q->Next, q->Value);
	}

	getch();

}

//Pointler ile matrix oluþturma
//int **Matrixx;
//int ROW, COLOUMB;
//Matrixx = (int*)malloc(sizeof(int)*ROW);
//for (int i = 0; i < ROW; i++)
//{
//	for (int j = 0; j < COLOUMB; j++)
//	{
//		Matrixx[i] = (int*)malloc(sizeof(int)*COLOUMB);
//	}
//}



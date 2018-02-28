///*
//
//#########################
//#                       #
//#        OMANSAK        #
//#                       #
//#########################
//*/

//#include <stdio.h>
//#include <stdlib.h>
//#define N 3
//
//struct LinkedList
//{
//	int Item;
//	struct LinkedList *Next;
//};
//
//typedef struct LinkedList *xList;
//
//xList GetNode()
//{
//	xList p;
//	p = (struct LinkedList*)malloc(sizeof(struct LinkedList));
//	return(p);
//}
//main()
//{
//	//nxn = 3x3 k=2
//	int Matrix[3][3] = {
//		{8,5,3},
//		{8,9,7},
//		{5,6,3} };
//	Foo(2, Matrix);
//
//
//	getch();
//}
//
//Foo(int k, int M[N][N])
//{
//	int D[N];
//	for (int i = 0; i < N; i++)
//	{
//		D[i] = M[k][i];
//	}
//	BubleSort(D, N);
//
//	xList  Head = GetNode();
//	Head->Item = NULL;
//	Head->Next = NULL;
//	for (int i = 0; i < N; i++)
//	{
//		xList p = GetNode();
//		p->Item = D[i];
//		p->Next = Head->Next;
//		Head->Next = p;
//	}
//
//	xList New = Head->Next;
//	while (New != NULL)
//	{
//		printf("%d", New->Item);
//		New = New->Next;
//	}
//
//}
//int BubleSort(int Array[], int n)
//{
//	int Temp;
//	for (int i = 1; i < n; i++)
//	{
//		for (int j = i; j > 0; j--)
//		{
//			if (Array[j] > Array[j - 1])//Array[j] < Array[j - 1] normalde böyle linked list son giren ilk çýkar oldugu için  tam ters sýralam yaptýk
//			{
//				Temp = Array[j];
//				Array[j] = Array[j - 1];
//				Array[j - 1] = Temp;
//			}
//			else break;
//		}
//	}
//}

//#include <stdio.h>
//#include <stdlib.h>
//#define MAXSIZE 5
//struct Stack {
//	int Value[MAXSIZE];
//	int Top;
//};
//
//typedef struct Stack *_Stack;
//int A[MAXSIZE][MAXSIZE] = {
//	{1,2,3,4,5},
//	{5,3,4,2,3},
//	{8,6,2,4,5},
//	{4,5,2,3,6},
//	{9,5,2,7,5}
//};
//_Stack *Foo(int Matrix[MAXSIZE][MAXSIZE], int k)
//{
//	_Stack Ptr = (struct Stack*)malloc(sizeof(struct Stack));
//	Ptr->Top = -1;
//	for (int i = 1; i < MAXSIZE; i++)
//	{
//		for (int j = i; j > 0; j--)
//		{
//			if (Matrix[k][j] > Matrix[k][j - 1])
//			{
//				int temp = Matrix[k][j - 1];
//				Matrix[k][j - 1] = Matrix[k][j];
//				Matrix[k][j] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < MAXSIZE; i++)
//	{
//
//		Ptr->Top++;
//		Ptr->Value[Ptr->Top] = Matrix[k][i];
//	}
//	return Ptr;
//}
//
//main()
//{
//	_Stack X;
//	X = Foo(A, 1);
//	for (int i = X->Top; i > -1; i--)
//	{
//		printf(" %d ", X->Value[i]);
//	}
//	getch();
//}
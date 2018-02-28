///*
//
//#########################
//#                       #
//#        OMANSAK        #
//#                       #
//#########################
//
//*/
//
//#include <stdio.h>
//#include <stdlib.h>
//
//main()
//{
//	int **A[3][2] = { {3,6},{5,9},{8,4} };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			printf(" %d ", A[i][j]);
//		}
//		printf("\n");
//	}
//
//	Foo(A, 3, 2);
//	puts("---Sorting Matrix---");
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			printf(" %d ", A[i][j]);
//		}
//		printf("\n");
//	}
//	getch();
//}
//int Foo(int *Matrix, int R, int C)
//{
//	int Temp, x = 0;
//	int Min;
//	for (int i = 0; i < R*C; i++)
//	{
//		Min = i;
//		for (int j = i + 1; j < R*C; j++)
//		{
//			x++;
//			if (Matrix[j] < Matrix[Min])
//			{
//				Min = j;
//			}
//
//		}
//		Temp = Matrix[i];
//		Matrix[i] = Matrix[Min];
//		Matrix[Min] = Temp;
//	}
//}

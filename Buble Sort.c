///*
//
//#########################
//#                       #
//#        OMANSAK        #
//#                       #
//#########################
//Buuble  Sort.
//
//Karþýlaþtýrma Sayýsý  : n^2/2
//http://cathyatseneca.github.io/DSAnim/web/bubble.html
//*/
//
//#include <stdio.h>
//#include <stdlib.h>
//
//main()
//{
//	int A[] = { 8,6,5,6,7,11,22,33 };
//	int n = sizeof(A) / sizeof(int);
//	Display(A, n);
//	int Count = InsertionSort1(A, n);
//	printf("Karsilastirma Sayisi : %d\n", Count);
//	Display(A, n);
//	getch();
//}
//Display(int Array[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf(" %d ", Array[i]);
//	}
//	puts("");
//}
//int InsertionSort1(int Array[], int n)
//{
//	int Temp, x = 0;
//	for (int i = n; i > 1; --i)
//	{
//		for (int j = 0; j < i - 1; j++)
//		{
//			if (Array[j] > Array[j + 1])
//			{
//				Temp = Array[j];
//				Array[j] = Array[j + 1];
//				Array[j + 1] = Temp;
//			}
//
//		}
//	}
//	return x;
//}
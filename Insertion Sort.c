///*
//
//#########################
//#                       #
//#        OMANSAK        #
//#                       #
//#########################
//Insertion Sort.
//
//Karþýlaþtýrma Sayýsý  :  MAX = n(n-1) /2
//
//https://courses.cs.vt.edu/csonline/Algorithms/Lessons/InsertionCardSort/insertioncardsort.swf
//*/
//
//#include <stdio.h>
//#include <stdlib.h>
//
//main()
//{
//	int A[] = { 8,3,6,5,7,2,3,5,8,9,6,3,4 };
//	int n = sizeof(A) / sizeof(A[0]);
//	Display(A, n);
//	int Count = InsertionSort(A, n);
//	printf("Karsilastirma Sayisi : %d\n", Count);
//	Display(A, n);
//	getch();
//}
//Display(int Array[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d", Array[i]);
//	}
//	puts("");
//}
//int InsertionSort(int Array[], int n)
//{
//	int Temp, x = 0;
//	for (int i = 1; i < n; i++)
//	{
//		for (int j = i; j > 0; j--)
//		{
//			x++;
//			if (Array[j] < Array[j - 1])
//			{
//				Temp = Array[j];
//				Array[j] = Array[j - 1];
//				Array[j - 1] = Temp;
//			}
//			else break;
//		}
//	}
//	return x;
//}
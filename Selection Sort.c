///*
//
//#########################
//#                       #
//#        OMANSAK        #
//#                       #
//#########################
//Selection Sort.
//
//Karþýlaþtýrma Sayýsý  : n^2/2
//
//https://upload.wikimedia.org/wikipedia/commons/9/94/Selection-Sort-Animation.gif
//*/
//
//#include <stdio.h>
//#include <stdlib.h>
//
//main()
//{
//	int A[] = { 3,6,5,9,8,4,2,3,5,4,7 };
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
//	int Min;
//	for (int i = 0; i < n; i++)
//	{
//		Min = i;
//		for (int j = i + 1; j < n; j++)
//		{
//			x++;
//			if (Array[j] < Array[Min])
//			{
//				Min = j;
//			}
//
//		}
//		Temp = Array[i];
//		Array[i] = Array[Min];
//		Array[Min] = Temp;
//
//
//	}
//	return x;
//}
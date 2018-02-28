///*
//
//#########################
//#                       #
//#        OMANSAK        #
//#                       #
//#########################
//Straight Insertion Sort.
//
//Karþýlaþtýrma Sayýsý  :  MAX = n^2/4
//
//http://homepages.math.uic.edu/~leon/cs-mcs401-s08/handouts/straight-insertion-sort.pdf
//*/
//
//#include <stdio.h>
//#include <stdlib.h>
//
//main()
//{
//	int A[] = { 5,6,3,4,2,1 };
//	int n = sizeof(A) / sizeof(A[0]);
//	Display(A, n);
//	int Count = StraightInsertionSort(A, n);
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
//int StraightInsertionSort(int Array[], int n)
//{
//	int Temp, x = 0;
//	for (int i = 1; i < n; i++)
//	{
//		Temp = Array[i];
//		int j = i;
//		while (j > 0 && Array[j - 1] > Temp)
//		{
//			x++;
//			Array[j] = Array[j - 1];
//			j--;
//		}
//		Array[j] = Temp;
//
//	}
//	return x;
//}
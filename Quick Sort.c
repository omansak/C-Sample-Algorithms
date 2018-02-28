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
//http://me.dt.in.th/page/Quicksort/
//*/
//
//#include <stdio.h>
//#include <stdlib.h>
//
//main()
//{
//	int A[] = { 5,4,2,1,2,4,8,9,6,7 };
//	int n = sizeof(A) / sizeof(int);
//	Display(A, n);
//	QuickSort(A, 0, n - 1);
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
//int QuickSort(int Array[], int Start, int End)
//{
//	//End 9 Start 0
//	//E5 S6
//	int Temp, x = 0;
//	int Pivot = Array[(Start + End) / 2];
//	int S = Start, E = End;
//	do {
//		while (Pivot < Array[E])
//			E--;
//
//		while (Pivot > Array[S])
//			S++;
//
//		if (S <= E)
//		{
//			Temp = Array[S];
//			Array[S] = Array[E];
//			Array[E] = Temp;
//			E--;
//			S++;
//		}
//
//
//	} while (E >= S);
//
//	if (Start < E)
//	{
//		QuickSort(Array, Start, E);
//	}
//
//	if (End > S)
//	{
//		QuickSort(Array, S, End);
//	}
//}
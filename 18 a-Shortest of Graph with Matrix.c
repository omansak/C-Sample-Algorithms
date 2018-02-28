///*
//
//#########################
//#                       #
//#        OMANSAK        #
//#                       #
//#########################
//*/
//#include <stdio.h>
//#include <string.h>
//#include <limits.h>
//#define FALSE 0
//#define TRUE 1
//#define N 6
//int Path[N], Visited[N], Index = 0;
//int MinPath[N], MinIndex, Min = INT_MAX;//INT_MAX : C Compilera göre Int16 bitteki MAX Sayý. Min = 99999 bu þekildede olablirdi
//int Graph[N][N] =
//{
//	{ 0,16,0,0,19,21 },
//	{ 16,0,5,6,0,11 },
//	{ 0,5,0,10,0,0 },
//	{ 0,6,10,0,18,14 },
//	{ 19,0,0,18,0,33 },
//	{ 21,11,0,14,33,0 } };
//
//void PrintElements()
//{
//	puts("# Avaible Path #");
//	int i, Amount = 0;
//	for (i = 0; i < Index; i++)
//	{
//		printf(" %d ", Path[i]);
//	}
//	Amount = CalculatePath();
//	printf("= %d", Amount);
//	printf("\n");
//	if (Min > Amount)
//	{
//		memcpy(MinPath, Path, N);//Ýki Diziyi birbirine eþitleme diger yollar için http://stackoverflow.com/questions/7882735/why-cant-i-assign-arrays-as-a-b
//		MinIndex = Index;
//		Min = Amount;
//	}
//
//}
//int CalculatePath()
//{
//	int x = 0;
//	for (int i = 0; i < Index - 1; i++)
//	{
//		x += Graph[Path[i]][Path[i + 1]];
//	}
//	return x;
//}
//void FindPath(int From, int To)
//{
//	Visited[From] = TRUE;
//	Path[Index] = From;
//	Index++;
//	if (From == To)
//	{
//		PrintElements();
//	}
//	else
//	{
//		int i;
//		for (i = 0; i < N; i++)
//		{
//			if (Visited[i] == FALSE && Graph[From][i] > 0)
//				FindPath(i, To);
//		}
//	}
//
//	Visited[From] = FALSE;
//	Index--;
//}
//void main()
//{
//	FindPath(0, 5);
//	printf("The Shortest Path : ");
//	for (int i = 0; i < MinIndex; i++)
//	{
//		printf(" %d ", MinPath[i]);
//	}
//	printf(" = %d ", Min);
//	getch();
//}
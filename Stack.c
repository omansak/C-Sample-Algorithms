//
///*
//
//#########################
//#                       #
//#        OMANSAK        #  
//#                       #
//#########################
//
//Stack (First in,Last Out) : https://www.tutorialspoint.com/data_structures_algorithms/stack_algorithm.htm
//
//*/
//
//
//
//#include <stdio.h>
//#include <stdlib.h>
//#define STACKSIZE 10
//
//struct Stack {
//	int Top;
//	int Item[STACKSIZE];
//};
//
//int Empty(struct Stack *Ptr)
//{
//	if (Ptr->Top == -1)
//		return 1;//True
//	else
//		return 0;//False
//}
//
//int Pop(struct Stack * Ptr) {
//	if (Empty(Ptr))
//	{
//		printf("Stack is empty\n");
//		return -1000;
//	}
//	else
//		return Ptr->Item[Ptr->Top--];
//}
//
//void Push(struct Stack *Ptr, int Value)
//{
//	if (Ptr->Top == STACKSIZE - 1)
//	{
//		puts("Stack is full.");
//	}
//	else
//	{
//		Ptr->Item[++Ptr->Top] = Value;
//
//	}
//}
//
//void Display(struct Stack *Ptr)
//{
//	struct Stack *Clone = Ptr;
//	if (Empty(Clone))
//		puts("Stack is empty.");
//	else
//		for (int i = Ptr->Top; i > -1; i--)
//		{
//			printf("[%d] \t:\t %d \n", i + 1, Clone->Item[i]);
//		}
//
//}
//
//main()
//{
//	struct Stack *_Stack = (struct Stack*)malloc(sizeof(struct Stack));
//	_Stack->Top = -1;
//
//	Push(_Stack, 1);
//	Push(_Stack, 11);
//	Push(_Stack, 111);
//	Push(_Stack, 1111);
//	Push(_Stack, 11111);
//	Push(_Stack, 111111);
//
//	puts(" # # #");
//	Display(_Stack);
//	puts(" # # #");
//
//	printf("%d has been removed.\n", Pop(_Stack));
//	printf("%d has been removed.\n", Pop(_Stack));
//
//	puts(" # # #");
//	Display(_Stack);
//	puts(" # # #");
//
//	getch();
//
//}

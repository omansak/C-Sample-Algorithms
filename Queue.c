///*
//
//#########################
//#                       #
//#        OMANSAK        #
//#                       #
//#########################
//
//Queue (First in,First Out) : https://www.tutorialspoint.com/data_structures_algorithms/dsa_queue.htm
//
//*/
//
//
//
//#include <stdio.h>
//#include <stdlib.h>
//#define QUEUESIZE 10
//
//struct Queue {
//	int Items[QUEUESIZE];
//	int Front, Rear;
//};
//
//
//int Empty(struct Queue *Ptr)
//{
//	if (Ptr->Front == Ptr->Rear)
//		return 1;
//	else
//		return 0;
//	//return Ptr->Front == Ptr->Rear ? 1 : 0;
//}
//
//int Remove(struct Queue *Ptr)
//{
//	if (Empty(Ptr))
//	{
//		puts("Queue is empty.");
//	}
//	else if (Ptr->Front == QUEUESIZE - 1)
//		Ptr->Front = 0;
//	else
//		Ptr->Front++;
//
//	return Ptr->Items[Ptr->Front];
//}
//
//void Insert(struct Queue *Ptr, int Value)
//{
//	if (Ptr->Rear == QUEUESIZE - 1)
//	{
//		Ptr->Rear = 0;
//	}
//	else
//	{
//		Ptr->Rear++;
//	}
//
//
//	if (Ptr->Rear == Ptr->Front)
//	{
//		puts("Queue is overflow");
//	}
//	else
//	{
//		Ptr->Items[Ptr->Rear] = Value;
//	}
//
//}
//
//void Display(struct Queue *Ptr)
//{
//	struct Queue *Clone = Ptr;
//	if (Empty(Ptr))
//		puts("Queue is empty.");
//	else
//		for (int i = Clone->Front + 1; i != Clone->Rear; i++)
//		{
//			if (i == QUEUESIZE - 1)
//			{
//				i = 0;
//			}
//			else
//			{
//				printf("[%d] \t : \t %d\n", i, Clone->Items[i]);
//			}
//			
//		}
//}
//
//main()
//{
//	struct Queue *_Queue = (struct Queue*)malloc(sizeof(struct Queue));
//	_Queue->Front = -1;
//	_Queue->Rear = -1;
//
//	Insert(_Queue, 1);
//	Insert(_Queue, 11);
//	Insert(_Queue, 111);
//	Insert(_Queue, 1111);
//	Insert(_Queue, 11111);
//
//	puts("# # #");
//	Display(_Queue);
//	puts("# # #");
//
//	printf("%d has been removed.\n", Remove(_Queue));
//	printf("%d has been removed.\n", Remove(_Queue));
//
//	puts("# # #");
//	Display(_Queue);
//	puts("# # #");
//
//	getch();
//
//}
///*
//
//#########################
//#                       #
//#        OMANSAK        #
//#                       #
//#########################
//
//Linked List (First in,Last Out) : http://www.tutorialspoint.com/data_structures_algorithms/linked_lists_algorithm.htm
//
//*/
//
//#include <stdio.h>
//
//
//struct LinkedList
//{
//	int Item;
//	struct LinkedList *Next;
//};
//
//typedef struct LinkedList *xList; // All Xlist's variables are Pointer from now.
//
//xList GetNode()
//{
//	xList p;
//	p = (struct LinkedList*)malloc(sizeof(struct LinkedList));
//	return(p);
//}
//
//void InsertAfter(xList Ptr, int pItem)
//{
//	xList newPtr;
//	if (Ptr == NULL)
//	{
//		printf("List is empty.");
//	}
//	else
//	{
//		newPtr = GetNode();
//		newPtr->Item = pItem;
//		newPtr->Next = Ptr->Next;
//		Ptr->Next = newPtr;
//
//	}
//
//
//}
//
//void DeleteAfter(xList Ptr, int *Value)
//{
//
//	xList q;
//	if (Ptr == NULL || Ptr->Next == NULL)
//	{
//		puts("List is empty");
//	}
//	else
//	{
//		q = Ptr->Next;
//		*(Value) = q->Item;	//Value just store deleted item.
//		Ptr->Next = q->Next;
//		//free(q);
//	}
//
//}
//
//xList Search(xList Ptr, int Value)
//{
//	for (xList q = Ptr->Next; q != NULL; q = q->Next)
//	{
//		if (q->Item == Value) return q;
//	}
//	return NULL;
//}
//
//void Display(xList Ptr)
//{
//	for (xList q = Ptr->Next; q != NULL; q = q->Next)
//	{
//		printf("[%p]-[%p] \t:\t %d \n", q, q->Next, q->Item);
//	}
//}
//main()
//{
//	xList Head = GetNode();
//	Head->Item = NULL;
//	Head->Next = NULL;
//	puts("Insert Function");
//	InsertAfter(Head, 5);
//	InsertAfter(Head, 55);
//	InsertAfter(Head, 555);
//	InsertAfter(Head, 5555);
//	InsertAfter(Head, 55555);
//
//	puts("# Display #");
//	Display(Head);
//	puts("# # #");
//
//	int deletingValue;
//	puts("Delete Function");
//	DeleteAfter(Head, &deletingValue);
//	printf("%d has been deleted.\n", deletingValue);
//
//	DeleteAfter(Head, &deletingValue);
//	printf("%d has been deleted.\n", deletingValue);
//
//	puts("# Display #");
//	Display(Head);
//	puts("# # #");
//	puts("Search Function");
//	xList searchingList;
//
//	if ((searchingList = Search(Head, 555)) == NULL)
//	{
//		puts("Item not found.");
//	}
//	else
//	{
//		printf("[%p] - [%p] \t:\t %d\n", searchingList, searchingList->Next, searchingList->Item);
//	}
//
//
//
//	getch();
//}

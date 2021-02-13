#include <stdio.h>
#include <stdlib.h>

#include "dll.h"

void main()
{
	node* head = NULL;
	insertAtHead(&head, 2);
	insertAtHead(&head, 9);
	insertAtTail(&head, 8);
	printf("Printed linked list:");
	printLinkedList(&head);
	printf("\nReversed linked list: ");
	reversePrint(&head);
}

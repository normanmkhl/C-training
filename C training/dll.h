#ifndef DOUBLY_LINKED
#define DOUBLY_LINKED

typedef struct node {
	int data;
	struct node* next;
	struct node* prev;
}node;

void insertAtHead(node **, int);
void insertAtTail(node **, int);
void printLinkedList(node**);
void reversePrint(node**);

#endif
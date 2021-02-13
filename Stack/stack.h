#include <stdio.h>

typedef struct node {
	int data;
	struct node* next;
} node;

typedef struct stack {
	int size;
	node* head;
	node* tail;
} stack;

node* initNode(int );
stack* initStack();

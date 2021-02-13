#include <stdio.h>
#include <stdlib.h>

#include "dll.h"

void insertAtHead(node** head, int n)
{
	node* newnode = (struct node*)malloc(sizeof(node));
	newnode->data = n;
	newnode->next = NULL;
	newnode->prev = NULL;

	if (*head == NULL) {
		*head = newnode;
		return;
	}
	node* temp = *head;
	temp->prev = newnode;
	newnode->next = *head;
	*head = newnode;
}

void insertAtTail(node** head, int n)
{
	node* newnode = (struct node*)malloc(sizeof(node));
	newnode->data = n;
	newnode->next = NULL;
	newnode->prev = NULL;
	if (*head == NULL)
		return;
	node* temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = newnode;
	newnode->prev = temp;
}

void printLinkedList(node** head)
{
	node* temp = *head;
	while (temp != NULL) {
		printf("\t%d", temp->data);
		temp = temp->next;
	}
	return;
}

void reversePrint(node** head)
{
	node* temp = *head;
	if (temp == NULL)
		return;
	while (temp->next != NULL)
		temp = temp->next;
	while (temp != NULL) {
		printf("\t%d", temp->data);
		temp = temp->prev;
	}
}
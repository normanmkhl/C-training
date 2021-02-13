#pragma once
#ifndef VECTOR_H
#define VECTOR_H

#define VECTOR_INIT_CAPACITY 8;

typedef struct dynamic_array_struct
{
	void** items;
	int size;     /* total capacity */
	int capacity; /* number of elements in vector */
} vector;

void vector_init(vector* arrptr);
int vector_total(vector* arrptr);
static void vector_resize(vector* arrptr, int);
void vector_add(vector* arrptr, void*);
void vector_set(vector* arrptr, int, void*);
void* vector_get(vector* arrptr, int);
void vector_delete(vector* arrptr, int);
void vector_free(vector* arrptr);

#endif
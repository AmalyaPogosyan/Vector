#ifndef VECTOR_H
#define	VECTOR_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct{
	int* vec;
	int size;
	int capacity;
}Vector;

int at(const Vector *vector, int pos);
bool empty(const Vector *vector);
void push_back(Vector *vector, int value);
void pop_back(Vector *vector);
int getSize(const Vector *vector);
int getCapacity(const Vector *vector);
void insert(Vector *vector, int pos, int value);
void initializeVector(Vector *vector, int initialCapacity);
void print_arr(Vector *vector);
#endif //VECHOR_H

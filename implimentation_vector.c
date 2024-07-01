#include <stdlib.h>

#include "vector.h"
//1
int at (const Vector *vector, int pos){
	if(pos < 0 || pos > vector -> size){
		printf("Invalid position.\n");
		return 0;
	}
	return vector -> vec[pos];
}
//2
bool empty (const Vector *vector){
	return vector -> size == 0;
}
//3
void push_back (Vector *vector, int value){ 
	if(vector -> size == vector -> capacity){
		vector -> capacity *= 2;
		vector -> vec = (int*) realloc(vector -> vec,  vector -> capacity * sizeof(int));
	}
	vector -> vec[vector -> size] = value;	
	++(vector -> size);
}
//4
void pop_back (Vector *vector){
	if(vector -> size == 0){
		return;
	}
	--(vector -> size);
}
//5
int getSize (const Vector *vector){
	return vector -> size;
}
//6
int getCapacity (const Vector *vector){
	return vector -> capacity;
}
//7
void insert (Vector *vector, int pos, int value){
	if(vector -> size == vector -> capacity){
		vector -> capacity *= 2;
		vector -> vec = (int*) realloc (vector -> vec, vector -> capacity * sizeof(int));
	}
	for(int i = vector -> size; i > pos; --i){
		vector -> vec[i] = vector -> vec[i - 1];
	}
	vector -> vec[pos] = value;
	++(vector -> size);
}
//8
void initializeVector (Vector *vector, int initialCapacity){
	vector -> size = 0;
	vector -> capacity = initialCapacity;
	vector -> vec = (int*) malloc (vector -> capacity * sizeof(int));
}
//9
void print_arr(Vector *vector){
	for(int i = 0; i < vector -> size; ++i){
		printf("%5d", vector -> vec[i]);
	}
	printf("\n");
}

#include "hashing.h"
#include <stdio.h>
#include <stdlib.h>
void init(hashtable *h){
	int i;
	for(i = 0; i < size; i++){
		h -> arr[i] = NULL;
	}
}

void printHash(hashtable *h){

	int i;
	node *pointer;
	for(i = 0; i < size; i++){
		printf("%d - ", i);
		pointer = h -> arr[i];
		while(pointer != NULL){
			printf("%d ",pointer -> data);
			pointer = pointer -> next;
		}
		printf("\n");
	}
}

void insert(hashtable *h, int key){

	int index;
	int i;
	index = hash(key);
	printf("index is %d\n", index);
	node *current = h -> arr[index];
	node *temp = (node *)malloc(sizeof(node));
	temp -> data = key;
	temp -> next = NULL;
	if(current == NULL)
		h -> arr[index] = temp;
	else{
		while(current -> next != NULL){
			current = current -> next;
		}
		current -> next = temp;
	}
}

void delete(hashtable *h, int key){

	int index;
	index = hash(key);
	node *current = h -> arr[index];
	node *prev = NULL;
	while(current != NULL && current -> data != key)
	{
		prev = current;
		current = current -> next;
	}
	if(current == NULL)
	{
		printf("No node found\n");
	}
	else
	{
		if(prev == NULL){
			h -> arr[index]  = current -> next;
		}
		else{
			prev -> next = current -> next;
		}
	
	}
	free(current);
}

node *search(hashtable *h, int key){

	int index;
	index = hash(key);
	node *current = h -> arr[index];
	while(current != NULL){
		if(current -> data == key)
		{
			printf("Key found\n");
			return current;
		}
		current = current -> next;
	}
	printf("No node found\n");
	return NULL;
}

int hash(int key){
	return (key % size);
}

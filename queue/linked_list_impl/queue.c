#include<stdio.h>
#include<stdlib.h>
#include "queue.h"
void init(node *p){

	p -> head = NULL;
	p -> tail = NULL;
}

void enqueue(node *p, int data)
{
	queue *q = (queue *)malloc(sizeof(queue));
	q -> val = data;
	q -> next = NULL;
	if(p -> tail == NULL)
	{
		p -> head = p -> tail = q;
	}
	else
	{
		p -> tail -> next = q;
		p -> tail = q;
	}
}

int dequeue(node *p)
{
	int val = p -> head -> val;
	queue *q = p -> head;
	if(p -> head == p -> tail)
		p -> head = p -> tail = NULL;
	else
		p -> head = p -> head -> next;
	free(q);
	return val;
}

int isEmpty(node *p)
{
	if(p -> head == NULL)
		return 1;
	return 0;
}

void print(node *p)
{
	printf("hi\n");
	queue *q = p -> head;
	while(q != NULL)
	{
		printf("%d ", q -> val);
		q = q -> next;
	}
	printf("\n");
}

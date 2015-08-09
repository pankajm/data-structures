#ifndef __QUEUE_H
#define __QUEUE_H
#include "tree.h"
#define size 100
typedef struct queue
{
	tree *arr[size];
	int rear, front;	
}queue;
void enqueue(queue *, tree *);
tree *dequeue(queue *);
int isEmpty(queue *);
int isFull(queue *);
void initQueue(queue *);
#endif

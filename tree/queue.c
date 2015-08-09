#include "queue.h"
#include <stdio.h>
void initQueue(queue *q)
{
	q -> front = q -> rear = -1;
}

void enqueue(queue *q, tree *t)
{
	if(q -> rear == -1)
	{
		q -> rear = q -> front = 0;
		q -> arr[q -> rear] = t;
	}
	else
	{
		q -> rear++;
		q -> arr[q -> rear] = t;
	}
}

tree *dequeue(queue *q)
{
	tree *temp;
	if(q -> rear == q -> front)
	{
		temp = q -> arr[q -> front];
		q -> front = q -> rear = -1;
	}
	else
	{
		temp = q -> arr[q -> front];
		q -> front++;
	}
	return temp;
}

int isEmpty(queue *q)
{
	if(q -> front == -1)
		return 1;
	else
		return 0;
}

int isFull(queue *q)
{
	if(q -> rear == size - 1)
		return 1;
	else
		return 0;
}


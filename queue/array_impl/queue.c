#include <stdio.h>
#include "queue.h"
void init(queue *q)
{
	q -> rear = q -> front = -1;
}

void enqueue(queue *q, int val)
{
	if(q -> rear == -1)
		q -> rear = q -> front = 0;
	else
		q -> rear++;
	q -> data[q -> rear] = val;

}

int dequeue(queue *q)
{
	int val = q -> data[q -> front];
	if(q -> front == q -> rear)
		q -> front = q -> rear = -1;
	else
		q -> front++;

}

int isEmpty(queue *q)
{
	if(q -> front == -1)
		return 1;
	return 0;
}

int isFull(queue *q)
{
	if(q -> rear == size - 1)
		return 1;
	return 0;

}

void print(queue *q)
{
	printf("chutya");
	int index = q -> front;
	while(index <= q -> rear && index != -1 )
	{	
		printf("%d ", q -> data[index]);
		index++;
	}
	printf("\n");
}

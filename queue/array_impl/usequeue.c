#include<stdio.h>
#include "queue.h"
int main(){

	int choice;
	int no;
	queue *q;
	init(q);
	while(1){
		printf("Enter your choice\n1. Enqueue\n2. Dequeue\n 3. Print Queue\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				printf("Enter the no\n");
				scanf("%d", &no);
				if(!isFull(q))
					enqueue(q, no);
				else
					printf("Queue is full\n");
				break;
			case 2:
				if(!isEmpty(q))
					dequeue(q);
				else
					printf("Queue is empty\n");
				break;
			case 3:
				printf("chutya");
				print(q);
		
		}
	}

}

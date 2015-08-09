#include<stdio.h>
#include "queue.h"
int main(){

	int choice;
	int no;
	node q;
	init(&q);
	while(1){
		printf("Enter your choice\n1. Enqueue\n2. Dequeue\n3. Print Queue\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				printf("Enter the no\n");
				scanf("%d", &no);
				enqueue(&q, no);
				break;
			case 2:
				if(!isEmpty(&q))
					dequeue(&q);
				else
					printf("Queue is empty\n");
				break;
			case 3:
				printf("chutya");
				print(&q);
		
		}
	}

}

#include<stdio.h>
#include<stdlib.h>
#include "stack.h"
int main()
{
	stack s;
	int no;
	int choice;
	init(&s);
	while(1)
	{
		printf("Enter choice\n1. Push\n2. Pop\n3. Print Stack\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1: 
				printf("Enter the no\n");
				scanf("%d", &no);
				if(!isFull(&s))
					push(&s, no);
				else
					printf("stack is full");
				break;
			case 2: 
				if(!isEmpty(&s))
					pop(&s);
				else 	
					printf("stack is empty");
				break;
			case 3:
				print(&s);
				break;
		}
	}
}

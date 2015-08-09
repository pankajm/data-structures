#include <stdio.h>
#include "stack.h"
int main(){
	stack *top;
	int choice, no;
	top = init(top);
	while(1)
	{
		printf("Enter the choice\n1. Push\n2. Pop\n3. Print");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				printf("Enter no\n");
				scanf("%d", &no);
				push(&top, no);
				break;
			case 2:
				if(!isEmpty(top))
				{
					no = pop(&top);
					printf("Deleted no is %d\n", no);
				}
				else
					printf("Stack is empty\n");
				break;
			case 3:
				print(top);
		}
	
	}
}

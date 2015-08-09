#include "stack.h"
#include<stdlib.h>
#include<stdio.h>

stack *init(stack *top){

	top = NULL;
	return top;
}


void push(stack **top, int value)
{
	stack *temp = (stack *)malloc(sizeof(stack));
	temp -> val = value;
	temp -> next = *top;
	*top = temp;
}

int pop(stack **top)
{
	stack *p = *top;
	int data = p -> val;
	*top = p -> next;
	free(p);
	return data;
}

int isEmpty(stack *top)
{
	if(top == NULL)
		return 1;
	return 0;
}

void print(stack *top)
{
	stack *p = top;
	while(p != NULL)
	{
		printf("%d ", p -> val);
		p = p -> next;
	}
	printf("\n");
}

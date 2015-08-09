#include<stdio.h>
#include<stdlib.h>
#include "stack.h"
#include<math.h>
void init(stack *s)
{
	s -> top = -1;
}

void print(stack *s)
{
	int i = s -> top;
	while(i != -1)
	{
		printf("%d ", s -> arr[i]);
		i--;
	}
}

void push(stack *s, int val)
{
	s -> top = s -> top + 1;
	s -> arr[s -> top] = val;
}

int pop(stack *s)
{
	int x;
	x = s -> arr[s -> top];
	s -> top = s -> top - 1;
	return x;
}

int isEmpty(stack *s)
{
	if(s -> top == -1)
		return 1;
	return 0;

}

int isFull(stack *s)
{
	if(s -> top == size - 1)
		return 1;
	return 0;
}

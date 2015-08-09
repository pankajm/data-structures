#include<stdio.h>
#include<stdlib.h>
#include "tree.h"
#include "queue.h"
tree *init(tree *t)
{
	t = NULL;
	return t;
}

void insert(tree **t, int val)
{
	if(*t == NULL)
	{
		tree *temp = (tree *)malloc(sizeof(tree));
		temp -> data = val;
		temp -> left = NULL;
		temp -> right = NULL;
		*t = temp;
	}
	else if(val < ((*t) -> data))
		insert(&(*t) -> left, val);
	else
		insert(&(*t) -> right, val);
}

void inorder(tree *t)
{
	if(t != NULL)
	{
		inorder(t -> left);
		
		printf("%d ", t -> data);
		inorder(t -> right);
	}
}

void breadthFirst(tree *t)
{
	queue q;
	initQueue(&q);
	tree *temp;
	if(t != NULL)
		enqueue(&q, t);
	int i = 0;
	while(!isEmpty(&q)){
		temp = dequeue(&q);
		printf("%d ", temp -> data);
		if(temp -> left != NULL)
			enqueue(&q, temp -> left);
		if(temp -> right != NULL)
			enqueue(&q, temp -> right);	
	}
}

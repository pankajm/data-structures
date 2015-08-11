#include<stdio.h>
#include<stdlib.h>
#include "tree.h"
#include "queue.h"
int height = 0;
tree *init(tree *t)
{
	t = NULL;
	return t;
}

int countNodes(tree *t){

	if(t == NULL)
		return 0;
	else 
		return (1 + countNodes(t -> left) + countNodes(t -> right));

}

void calculateHeight(tree *t, int currentHeight){
	if(t == NULL)
		return;
	if(currentHeight > height)
		height = currentHeight;
	calculateHeight(t -> left, currentHeight + 1);
	calculateHeight(t -> right, currentHeight + 1);
}

int findHeight(tree *t){

	calculateHeight(t, 0);
	return height;
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

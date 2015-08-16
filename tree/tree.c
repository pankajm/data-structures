#include<stdio.h>
#include<stdlib.h>
#include "tree.h"

tree *init(tree *t){
	t = NULL;
	return t;
}

void insert(tree **t, int val){

	if(*t == NULL)
	{
		tree *temp = (tree *)malloc(sizeof(tree));
		temp -> left = NULL;
		temp -> right = NULL;
		temp -> data = val;
		*t = temp;
	}
	else if(val < ((*t) -> data))
		insert(&(*t) -> left, val);
	else
		insert(&(*t) -> right, val);
}

tree *findMinimum(tree *t){

	while(t -> left != NULL)
		t = t -> left;
	return t;
}

tree *delete_node(tree *t, int val){

	if(t == NULL)
		return NULL;
	if(val < t -> data)
		t -> left = delete_node(t -> left, val);
	else if(val > t -> data)
		t -> right = delete_node(t -> right, val);
	else
	{
		if(t -> left == NULL)
		{
			tree *temp = t -> right;
			free(t);
			return temp;
		}
		else if(t -> right == NULL)
		{
			tree *temp = t -> left;
			free(t);
			return temp;
		}
		else{
			tree *temp = findMinimum(t -> right);
			t -> data = temp -> data;
			t -> right = delete_node(t -> right, temp -> data);
		}
	
	}
	return t;
}

void preorder(tree *t){

	if(t != NULL){
		printf("%d ", t -> data);
		preorder(t -> left);
		preorder(t -> right);
	}
}

void inorder(tree *t){

	if(t != NULL){
		inorder(t -> left);
		printf("%d ", t -> data);
		inorder(t -> right);
	}
}

void postorder(tree *t){

	if(t != NULL){
		postorder(t -> left);
		postorder(t -> right);
		printf("%d ", t -> data);
	}
}

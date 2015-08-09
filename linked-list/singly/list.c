#include "list.h"
#include <stdio.h>
#include <stdlib.h>

list *init(list *l)
{
	l = NULL;
	return l;
}

list *append(list *l, int val)
{
	list *p = (list *)malloc(sizeof(list));
	list *temp = l;
	p -> next = NULL;
	p -> val = val;
	if(l == NULL)
		l = p;
	else
	{
		while(temp -> next != NULL)
			temp = temp -> next;
		temp -> next = p;
	}
	return l;
}

list *delete_node(list *l, int val)
{
	list *curr = l;
	list *pre = l;
	while(curr -> val != val && curr -> next != NULL)
	{
		pre = curr;	
		curr = curr -> next;
	}
	if(curr -> val == val)
	{
		if(curr == pre)
		{
			l = l -> next;
			printf("Deleting node %d\n ", curr -> val);
			free(curr);
			return l;
		}
		else
		{
			pre -> next = curr -> next;
			printf("Deleting node %d\n ", curr -> val);
			free(curr);
			return l;
		}
	
	}
	if(curr -> next == NULL){
		printf("Node not found\n");
		return l;
	}
}

list *insert(list *l, int pos, int val)
{
	int i;
	list *temp = (list *)malloc(sizeof(list));
	temp -> val = val;
	if(pos == 1)
	{
		temp -> next = l;
		l = temp;
	}
	else{
		list *curr = l;
		for(i = 1; i != pos-1 && curr != NULL; i++)
			curr = curr -> next;
		if(curr != NULL)
		{
			temp -> next = curr -> next;
			curr -> next = temp;
		}
		else
			printf("Invalid node number\n");	
	}
	return l;

}


void print(list *l)
{
	while(l != NULL)
	{
		printf("%d ", l -> val);
		l = l -> next;
	}
	printf("\n");
}

int isEmpty(list *l)
{
	if(l == NULL)
		return 1;
	return 0;
}

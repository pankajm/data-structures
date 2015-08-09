#include<stdio.h>
#include "list.h"
#include<stdlib.h>

list *init(list *head)
{
	head = NULL;
	return head;
}

list *insert(list *head, int pos, int val)
{
	int i;
	list *p = (list *)malloc(sizeof(list));
	p -> data = val;
	p -> next = NULL;
	p -> prev = NULL;
	if(head == NULL)
	{
		head = p;
	}
	else
	{
		list *q = head;
		if(pos == 1)
		{
			p -> next = q;
			q -> prev = p;
			head = p;
		
		}
		else
		{
			for(i = 1; i < pos - 1 && q != NULL; i++)		
				q = q -> next;
			if(i == pos - 1)
			{
				if(q -> next != NULL)
				{
					p -> next = q -> next;
					p -> prev = q;
					q -> next -> prev = p;
					q -> next = p;
				}
				else
				{
					q -> next = p;
					p -> prev = q;
				}
			}	
			else
				printf("Enter the correct position\n");
		}
	}	
	return head;
}

list *delete_node(list *head, int no)
{
	list *p = head;
	if(p -> data == no)
	{
		if(p -> next != NULL)
		{
			p -> next -> prev = NULL;
			head = p -> next;
			free(p);
		}
		else
		{
			head = NULL;
			free(p);
		}
		return head;

	}
	else
	{
		while(p -> next != NULL)
		{
			if(p -> next -> data == no)
			{
				list *q = p -> next;
				p -> next = p -> next -> next;
				if(p -> next != NULL)
					p -> next -> prev = p;
				free(q);
				
				return head;
			}
			p = p -> next;
		}	
		printf("Node not found\n");
	}
	return head;

}


void print(list *head)
{
	list *p = head;
	while(p != NULL)
	{
		printf("%d ", p -> data);
		p = p -> next;
	}
	printf("\n");
}

int isEmpty(list *l)
{
	if(l == NULL)
		return 1;
	return 0;

}



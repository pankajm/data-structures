#include<stdio.h>
#include<stdlib.h>
#include "tree.h"
int main()
{
	int choice, number, minimumNo;
	tree *t;
	t = init(t);
	while(1)
	{
		printf("Choose option\n1. Insert\n2. Delete\n3. Inorder\n4. Exit\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				printf("Enter the number\n");
				scanf("%d", &number);
				insert(&t, number);
				break;
			case 2:
				printf("Enter the number\n");
				scanf("%d", &number);
				t = delete_node(t, number);
				break;
			case 3:
				inorder(t);
				printf("\n");
				break;
			case 4:
				exit(0);
	
		}

	}
}

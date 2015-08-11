#include<stdio.h>
#include<stdlib.h>
#include "tree.h"
int main()
{
	int choice, number, minimumNo, count, treeHeight;
	tree *t;
	t = init(t);
	while(1)
	{
		printf("Choose option\n1. Insert\n2. Inorder\n3. Breadthwise\n4. Exit\n5. Count Nodes\n6. Height\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				printf("Enter the number\n");
				scanf("%d", &number);
				insert(&t, number);
				break;
			case 2:
				inorder(t);
				printf("\n");
				break;
			case 3:
				breadthFirst(t);
				printf("\n");
				break;
			case 4:
				exit(0);
				break;
			case 5:
				count = countNodes(t);
				printf("%d", count);
				printf("\n");
				break;
			case 6:
				treeHeight = findHeight(t);	
				printf("Height is %d\n", treeHeight);
	
		}

	}
}

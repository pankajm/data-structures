#include<stdio.h>
#include "list.h"
int main(){

	int choice, pos;
	int no;
	list *l;
	l = init(l);
	while(1){
		printf("Enter your choice\n1. Append\n2. Delete\n3. Insert\n4. Print\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				printf("Enter the no\n");
				scanf("%d", &no);
			//	l = append(l, no);
				break;
			case 2:
				printf("Enter the no ");
				scanf("%d", &no);
				if(!isEmpty(l))
				 	l = delete_node(l, no);
				else
					printf("list is empty\n");
				break;
			case 3:
				printf("Enter the position\n");
				scanf("%d", &pos);
				printf("Enter the number");
				scanf("%d", &no);
				l = insert(l, pos, no);
				break;
			
			case 4:
				print(l);
		
		}
	}

}

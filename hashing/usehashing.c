#include "hashing.h"
#include <stdio.h>
#include <stdlib.h>
int main(){

	int choice, key;
	node *searchedIndex;
	hashtable h;
	init(&h);
	while(1){
	
		printf("Enter the choice\n1. Insert\n 2. Delete\n 3. Search\n 4. PrintHash\n 5. Exit\n");
		scanf("%d", &choice);
		switch(choice){
			
			case 1: 
				printf("Enter the key\n");
				scanf("%d", &key);
				insert(&h, key);
				break;
			case 2: 
				printf("Enter the key\n");
				scanf("%d", &key);
				delete(&h, key);
				break;
			case 3: 
				printf("Enter the key\n");
				scanf("%d", &key);
				searchedIndex = search(&h, key);
				if(searchedIndex != NULL)
					printf("Value searched is %d\n", searchedIndex -> data);
				break;
			case 4:
				printHash(&h);
				break;
			case 5: 
				exit(0);
		
		}
	}
}

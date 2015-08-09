#include "heap.h"
int main(){
	
	heap h;
	initialize(&h);
	insert(&h, 10);
	insert(&h, 7);
	insert(&h, 9);
	insert(&h, 4);
	delete_node(&h); 
	insert(&h, 12);
	insert(&h, 3);
	insert(&h, 11);
	insert(&h, 2);
	printHeap(&h);
	return 0;
}

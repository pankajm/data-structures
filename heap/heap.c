#include "heap.h"
#include <stdio.h>

void initialize(heap *h){

	h -> lastIndex = -1;

}


void insert(heap *h, int val){

	h -> lastIndex++;
	h -> heapArray[h -> lastIndex] = val;
	percolateUp(h);
}

int delete_node(heap *h){

	if(h -> lastIndex != -1){
		int rootNode = h -> heapArray[0];
		h -> heapArray[0] = h -> heapArray[h -> lastIndex];
		h -> lastIndex--;
		percolateDown(h);
		
	}
	else
		printf("Heap is empty\n");

}

void printHeap(heap *h){

	int i = 0;
	while(i != h -> lastIndex){
		printf("%d ", h -> heapArray[i]);
		i++;
	}
	printf("%d\n", h -> heapArray[h -> lastIndex]);
}

void percolateUp(heap *h){
	
	int index = h -> lastIndex;
	int temp;
	while(index != 0){
		if(h -> heapArray[index] > h -> heapArray[(index - 1)/ 2])
		{
			temp = h -> heapArray[index];
			h -> heapArray[index] = h -> heapArray[(index - 1)/ 2];
			h -> heapArray[(index - 1)/ 2] = temp;
			index = (index - 1)/2;
		}
		else 
			break;

	}
	
}

void percolateDown(heap *h){

	int index = 0;
	int temp;
	while(2*index + 2 <= h -> lastIndex){
	
		if((h -> heapArray[index] < h -> heapArray[2*index + 1]) || (h -> heapArray[index] < h -> heapArray[2*index + 2]))
		{
			if(h -> heapArray[2*index + 2] > h -> heapArray[2*index] + 1)
			{
				temp = h -> heapArray[index];
				h -> heapArray[index] = h -> heapArray[2*index + 2];
				h -> heapArray[2*index + 2] = temp;
				index = 2*index + 2;
			}
			else
			{
				temp = h -> heapArray[index];
				h -> heapArray[index] = h -> heapArray[2*index + 1];
				h -> heapArray[2*index + 1] = temp;
				index = 2*index + 1;
			}
		}
	}
	if(2*index + 1 <= h -> lastIndex){
	
		if(h -> heapArray[index] < h -> heapArray[2*index + 1])
		{
			temp = h -> heapArray[index];
			h -> heapArray[index] = h -> heapArray[2*index + 1];
			h -> heapArray[2*index + 1] = temp;
			index = 2*index + 1;
		}
	}
}

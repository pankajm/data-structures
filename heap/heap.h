#define size 100
typedef struct heap{

	int heapArray[size];
	int lastIndex;
}heap;

void insert(heap *, int);
int delete_node(heap *);
void initialize(heap *);
void printHeap(heap *);
void percolateUp(heap *);
void percolateDown(heap *);

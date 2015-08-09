#define size 100
typedef struct queue
{
	int data[size];
	int rear, front;
}queue;
void init(queue *);
void enqueue(queue *, int);
int dequeue(queue *);
int isEmpty(queue *);
int isFull(queue *);
void print(queue *);

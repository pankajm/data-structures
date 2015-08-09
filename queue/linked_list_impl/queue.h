typedef struct queue
{
	struct queue *next;	
	int val;
}queue;

typedef struct node
{
	struct queue *head;
	struct queue *tail;

}node;

void init(node *);
void enqueue(node *, int);
int dequeue(node *);
int isEmpty(node *);
void print(node *);

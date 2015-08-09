typedef struct stack
{
	struct stack *next;
	int val;
}stack;

void push(stack **, int);
int pop(stack **);
void print(stack *);
int isEmpty(stack *);
stack *init(stack *);

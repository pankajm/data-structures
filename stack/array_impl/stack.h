#define size 10
typedef struct stack
{
	int arr[size];
	int top;
}stack;
void init(stack *s);
void push(stack *s, int val);
int pop(stack *s);
int isEmpty(stack *s);
int isFull(stack *s);
void print(stack *s);

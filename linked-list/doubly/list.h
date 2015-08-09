typedef struct list
{
	struct list *next;
	struct list *prev;
	int data;
}list;

list *init(list *);
list *append(list *, int);
list *delete_node(list *, int);
void print(list *);
int isEmpty(list *);
list *insert(list *, int, int);

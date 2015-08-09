typedef struct list
{
	struct list *next;
	int val;
}list;

list *append(list *, int);
list *delete_node(list *, int);
void print(list *);
int isEmpty(list *);
list *init(list *);
list *insert(list *, int, int);

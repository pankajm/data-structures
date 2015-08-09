#define size 10
typedef struct node{

	struct node *next;
	int data;
}node;

typedef struct hashtable{
	node *arr[size];
}hashtable;

void insertBucket(hashtable *, int);
void deleteBucket(hashtable *, int);
node *search(hashtable *, int);
int hash(int);
void init(hashtable *);
void printHash(hashtable *);

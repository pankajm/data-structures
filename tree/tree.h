typedef struct tree{
	
	struct tree *left;
	struct tree *right;
	int data;
}tree;

tree *init(tree *);
void insert(tree **, int val);
tree *delete_node(tree *, int val);
void inorder(tree *);
void preorder(tree *);
void postorder(tree *);

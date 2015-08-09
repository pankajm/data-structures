#ifndef __TREE_H
#define __TREE_H
typedef struct tree
{
	int data;
	struct tree *left, *right;
}tree;

tree *init(tree *);
void insert(tree **, int);
void delete_node(tree **, int);
#endif

#include "binary_trees.h"
#include <stdlib.h>
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new_node;

	new_node = malloc(sizeof(bst_t));
	if (!new_node)
		return NULL;
	new_node->n = value;
	if (*tree == NULL)
	{
		new_node->parent = NULL;
		new_node->left = NULL;
		new_node->right = NULL;
	}
	else
	{
		new_node->parent = *tree;
		if (value < (*tree)->n)
		{
			new_node->left = (*tree)->left;
			new_node->right = NULL;
			(*tree)->left->parent = new_node;
			(*tree)->left = new_node;
		}
		else
		{
			new_node->right = (*tree)->right;
			new_node->left = NULL;
			(*tree)->right->parent = new_node;
			(*tree)->right = new_node;
		}
	}
	return (new_node);
}

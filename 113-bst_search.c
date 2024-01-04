#include "binary_trees.h"
/**
 * bst_search - searches for a value in a bst
 * @tree: node to bst
 * @value: alue to look up
 * return: node containing valu
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree == NULL)
		return (NULL);
	if (tree->n == value)
		return (tree);
	bst_search(tree->left, value);
	bst_search(tree->right, value);
	return (NULL);
}

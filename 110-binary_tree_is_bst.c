#include "binary_trees.h"
int min_(const binary_tree_t *tree)
{
	while (tree->left != NULL)
		tree = tree->left;
	return (tree->n);
}
int max_(const binary_tree_t *tree)
{
	while (tree->right != NULL)
		tree = tree->right;
	return (tree->n);
}
/**
 * binary_tree_is_bst - checks if binary tree
 * is a binary search tree
 *
 * @tree: pointer to root node to check
 * Return: 1 if valid bst
 * 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	int min, max;

	if (tree == NULL)
		return (0);
	min = min_(tree);
	max = max_(tree);
	if (min > tree->n || max < tree->n)
		return (0);
	if (binary_tree_is_bst(tree->left) == 1 && binary_tree_is_bst(tree->right) == 1)
		return (1);
	else
		return (0);
}

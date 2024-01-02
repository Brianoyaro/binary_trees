#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: root node of binary tree
 * Return: 1 if it is full
 * 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/*int left, right;

	if (tree == NULL)
		return (0);
	left = tree->left ? 1 + binary_tree_is_full(tree->left) : 0;
	right = tree->right ? 1 + binary_tree_is_full(tree->right) : 0;
	if (right == left)
		return (1);
	return (0);*/
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left)) && (binary_tree_is_full(tree->right));
	return (0);
}

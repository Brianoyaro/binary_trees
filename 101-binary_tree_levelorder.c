#include "binary_trees.h"
/**
 * binary_tree_levelorder - traverses level-orderly
 * @tree: pointer to root node
 * @func: pointer to function to call on each node
 * Return: Nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	if (tree->parent != NULL)
	{
		if (tree->parent->left == tree)
			func(tree->parent->right->n);
		else
			func(tree->parent->left->n);
	}
	if (tree->left == NULL && tree->right == NULL)
		return;
	if (tree->left->n < tree->right->n)
	{
		binary_tree_levelorder(tree->left, func);
		tree->right->right < tree->right->left ? binary_tree_levelorder(tree->right->right, func) : binary_tree_levelorder(tree->right->left, func);
	}
	else if (tree->right->n < tree->left->n)
	{
		binary_tree_levelorder(tree->right, func);
		tree->left->right < tree->left->left ? binary_tree_levelorder(tree->left->right, func) : binary_tree_levelorder(tree->left->left, func);
	}
}

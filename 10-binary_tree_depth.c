#include "binary_trees.h"
/**
 * binary_tree_depth - finds depth of node
 * @tree: pointer to node
 * Return: height of tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t val;

	if (tree->parent == NULL)
		return (0);
	val = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;
	return (val);
}

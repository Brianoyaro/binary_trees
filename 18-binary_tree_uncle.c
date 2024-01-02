#include "binary_trees.h"
/**
 * binary_tree_uncle - finds uncle of a node
 * @node: node to find uncle for
 * Return: pointer to uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grandpa;

	if (node == NULL)
		return (NULL);
	parent = node->parent;
	grandpa = parent->parent;
	if (grandpa == NULL)
		return (NULL);
	if (grandpa->left == parent)
		return (grandpa->right);
	return (grandpa->left);
}

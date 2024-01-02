#include "binary_trees.h"
/**
 * binary_tree_sibling - fings sibling of a node
 * @node: node to find xsibling for
 * Return: pointer to sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	parent = node->parent;
	if (parent->left == NULL || parent->right == NULL)
		return (NULL);
	if (parent->right == node)
		return (parent->left);
	return (parent->right);
}

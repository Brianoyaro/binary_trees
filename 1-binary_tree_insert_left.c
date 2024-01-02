#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node to left of binary tree
 * @parent: pointer of node to insert child in
 * @value: value to store in new node
 * Return: pointer to creatednode
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->right = NULL;
	node->left = NULL;
	if (parent->left == NULL)
		parent->left = node;
	else
	{
		node->left = parent->left;
		parent->left->parent = node;
		parent->left = node;
	}
	return (node);
}

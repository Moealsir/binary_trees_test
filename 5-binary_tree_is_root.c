#include "binary_trees.h"
/**
 * binary_tree_is_root - a Function that ...
 * @node: Description of node.
 * Return: Description of the return value.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	return (0);
}


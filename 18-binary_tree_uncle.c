#include "binary_trees.h"
#include "17-binary_tree_sibling.c"
/**
 * binary_tree_uncle - a Function that ...
 * @node: Description of node.
 * Return: Description of the return value.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (node->parent == node->parent->parent->left)
		return (binary_tree_sibling(node->parent->parent->left));
	else if (node->parent == node->parent->parent->right)
		return (binary_tree_sibling(node->parent->parent->right));
	else
		return (NULL);
}


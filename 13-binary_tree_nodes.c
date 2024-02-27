#include "binary_trees.h"

/**
 * binary_tree_nodes - a Function that ...
 * @tree: Description of tree.
 * Return: Description of the return value.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left || tree->right)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	return (0);

}


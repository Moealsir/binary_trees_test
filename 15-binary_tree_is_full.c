#include "binary_trees.h"
/**
 * binary_tree_is_full - a Function that ...
 * @tree: Description of tree.
 * Return: Description of the return value.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if ((!tree->left && tree->right) ||
			(tree->left && !tree->right))
		return (0);

	if (!tree->left && !tree->right)
		return (1);
	return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
}


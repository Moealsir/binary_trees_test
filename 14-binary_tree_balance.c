#include "binary_trees.h"
/**
 * binary_tree_balance - a Function that ...
 * @tree: Description of tree.
 * Return: Description of the return value.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	if (!tree)
		return (0);

	height_l = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_balance(tree->right) : 0;
	return (height_l - height_r);
}


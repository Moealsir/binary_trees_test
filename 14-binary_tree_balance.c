#include "binary_trees.h"

/**
 * binary_tree_height - a Function that ...
 * @tree: Description of tree.
 * Return: Description of the return value.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l, height_r;

	if (tree == NULL)
		return (0);

	height_l = binary_tree_height(tree->left);
	height_r = binary_tree_height(tree->right);

	return ((height_l > height_r ? height_l : height_r) + 1);
}

/**
 * binary_tree_balance - a Function that ...
 * @tree: Description of tree.
 * Return: Description of the return value.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

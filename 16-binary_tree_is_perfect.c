#include "binary_trees.h"
/**
 * binary_tree_height - a Function that ...
 * @tree: Description of tree.
 * Return: Description of the return value.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	if (!tree)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}

/**
 * binary_tree_is_perfect - a Function that ...
 * @tree: Description of tree.
 * Return: Description of the return value.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = binary_tree_height(tree);
	size_t nodes = binary_tree_size(tree);

	size_t max_node = (1 << (height + 1)) - 1;

	return (nodes == max_node);
}

/**
 * binary_tree_size - a Function that ...
 * @tree: Description of tree.
 * Return: Description of the return (value.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}


#include "binary_trees.h"
/**
 * binary_tree_depth - a Function that ...
 * @tree: Description of tree.
 * Return: Description of the return value.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	if (!tree)
		return (0);

	height_l = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;
	height_r = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;
	return (height_l > height_r ? height_l : height_r);

}


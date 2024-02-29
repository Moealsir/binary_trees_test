#include "binary_trees.h"

/**
 * is_bst_util - a Function that ...
 * @tree: Description of tree.
 * @min: Description of min.
 * @max: Description of max.
 * Return: Description of the return value.
 */
int is_bst_util(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);

	if (tree->n <= min || tree->n >= max)
		return (0);

	return (is_bst_util(tree->left, min, tree->n) &&
			is_bst_util(tree->right, tree->n, max));
}

/**
 * binary_tree_is_bst - a Function that ...
 * @tree: Description of tree.
 * Return: Description of the return value.
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_bst_util(tree, INT_MIN, INT_MAX));
}


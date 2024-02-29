#include "binary_trees.h"
#include "11-binary_tree_size.c"

/**
 * binary_tree_is_complete - a Function that ...
 * @tree: Description of tree.
 * Return: Description of the return value.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_is_complete_util(tree, 0, binary_tree_size(tree)));
}
/**
 * binary_tree_is_complete_util - a Function that ...
 * @tree: Description of tree.
 * @index: Description of tree.
 * @node_count: Description of tree.
 * Return: Description of the return value.
 */
int binary_tree_is_complete_util(
	const binary_tree_t *tree, int index, int node_count)
{
	if (!tree)
		return (1);

	if (index >= node_count)
		return (0);

	return (binary_tree_is_complete_util(
		tree->left, 2 * index + 1, node_count) &&
			binary_tree_is_complete_util(
				tree->right, 2 * index + 2, node_count));
}


#include "binary_trees.h"

/**
 * binary_tree_delete - a Function that ...
 * @tree: Description of tree.
 * Return: Description of the return value.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}


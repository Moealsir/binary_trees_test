#include "binary_trees.h"
/**
 * binary_tree_postorder - a Function that ...
 * @tree: Description of tree.
 * @func: Description of func.
 * Return: Description of the return value.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

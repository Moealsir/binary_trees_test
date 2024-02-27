#include "binary_trees.h"
/**
 * binary_tree_inorder - a Function that ...
 * @tree: Description of tree.
 * @func: Description of (*func.
 * Return: Description of the return value.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);

}


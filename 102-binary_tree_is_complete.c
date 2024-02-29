#include "binary_trees.h"
/**
 * binary_tree_is_complete - a Function that ...
 * @tree: Description of tree.
 * Return: Description of the return value.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int level = 0;
	int last_level = 0;
	int complete = 1;

	while (tree)
	{
		level++;
		if (tree->left && !tree->right)
			complete = 0;
		else if (!tree->left && tree->right)
			return (0);

		if (tree->left)
			last_level = level;

		if (level != last_level && (tree->left || tree->right))
			return (0);

		if (tree->right == NULL)
			last_level = level - 1;

		if (level == last_level && (tree->left || tree->right))
			return (0);

		tree = tree->right ? tree->right : tree->left;
	}

	return (complete);
}


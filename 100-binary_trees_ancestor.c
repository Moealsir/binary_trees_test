#include "binary_trees.h"

/**
 * binary_trees_ancestor - a Function that ...
 * @first: Description of first.
 * @second: Description of second.
 * Return: Description of the return value.
 */
binary_tree_t *binary_trees_ancestor(
	const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *var_first = (binary_tree_t *)first;
	binary_tree_t *var_second = (binary_tree_t *)second;

	if (!first || !second)
		return (NULL);

	if (first == second)
		return (var_first);

	if (first->parent == second)
		return (var_second);

	if (second->parent == first)
		return (var_first);
	return (binary_trees_ancestor(first->parent, second->parent));
}



#include "binary_trees.h"
#include "tasks/100-binary_trees_ancestor.c"
/**
 * binary_trees_ancestor - a Function that ...
 * @first: Description of first.
 * @second: Description of second.
 * Return: Description of the return value.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
	const binary_tree_t *second)
{
	const binary_tree_t temp;

	if (!first || !second)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *) first);

	while (first)
	{
		temp = second;
		while (temp)
		{
			if (first == temp)
				return ((binary_tree_t *)first)
					temp = temp->parent;
		}
		first = first->parent;
	}
	return (NULL);

}


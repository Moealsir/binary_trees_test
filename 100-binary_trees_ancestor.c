#include "binary_trees.h"
/**
 * binary_trees_ancestor - a Function that ...
 * @first: Description of first.
 * @second: Description of second.
 * Return: Description of the return value.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
    if (first == NULL || second == NULL)
        return NULL;

    if (first == second)
        return (binary_tree_t *)first;

    while (first != NULL)
    {
        const binary_tree_t *temp = second;

        while (temp != NULL)
        {
            if (first == temp)
                return (binary_tree_t *)first;
            temp = temp->parent;
        }
        first = first->parent;
    }

    return NULL;
}

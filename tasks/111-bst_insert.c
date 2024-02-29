/**
 * bst_insert - a Function that ...
 * @tree: Description of tree.
 * @value: Description of value.
 * Return: Description of the return value.
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new_node, *current;

	if (!tree)
		return (NULL);

	if (!*tree)
	{
		new_node = binary_tree_node(NULL, value);
		*tree = new_node;
		return (new_node);
	}

	current = *tree;

	while (current)
	{
		if (value == current->n)
			return (NULL);

		if (value < current->n)
		{
			if (!current->left)
			{
				new_node = binary_tree_node(current, value);
				current->left = new_node;
				return (new_node);
			}
			current = current->left;
		}
		else
		{
			if (!current->right)
			{
				new_node = binary_tree_node(current, value);
				current->right = new_node;
				return (new_node);
			}
			current = current->right;
		}
	}

	return (NULL);
}


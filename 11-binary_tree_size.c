#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of the bt.
 *@tree: pointer to root node.
 *Return: size of bt.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_size(tree->left) +
			binary_tree_size(tree->right) + 1);
	}

	return (0);
}

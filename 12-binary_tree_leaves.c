#include "binary_trees.h"

/**
 * binary_tree_leaves - measures no of leaves of a bt.
 *@tree: ptr to the root node.
 *Return: no of leaves of a bt.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left || tree->right)
	{
		return (binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right));

	}
	else
		return (1);
}

#include "binary_trees.h"

/**
 * binary_tree_nodes -  counts the nodes with at least 1 child in a bt.
 *@tree: ptr to the root node.
 *Return: no of nodes with 1 child in bt.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left || tree->right)
	{
		return (binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right) + 1);
	}
	else
		return (0);
}

#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a tree.
 *@tree: pointer to root node.
 *Return: depth of bt.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree)
	{
		if (tree->parent)
			return (binary_tree_depth(tree->parent) + 1);
	}

	return (0);
}

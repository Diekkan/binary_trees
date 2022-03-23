#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if node is leaf or not.
 *@node: node to be checked
 *Return: 1 if node is leaf, 0 if not leaf.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->right && !node->left)
		return (1);
	else
		return (0);
}

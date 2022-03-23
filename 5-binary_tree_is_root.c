#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if node is root (god).
 *@node: node to check if root.
 *Return: 1 if root, 0 if not.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->parent)
		return (1);
	else
		return(0);
}

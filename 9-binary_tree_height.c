#include "binary_trees.h"

/**
 * binary_tree_height - function that measures height of bt.
 *@tree: pointer to root node.
 *Return: height of bt.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int lHeight, rHeight;

	if (!tree || (!tree->right && !tree->left))
		return (0);
	lHeight = binary_tree_height(tree->left);
	rHeight = binary_tree_height(tree->right);

	if (rHeight > lHeight)
		return (1 + rHeight);
	else
		return (1 + lHeight);
}

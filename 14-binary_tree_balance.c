#include "binary_trees.h"

/**
 *
 *
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int hLeft, hRight;
	if (!tree)
		return (0);
	if (tree->left)
		hLeft = binary_tree_height(tree->left) + 1;
	else
		hLeft = binary_tree_height(tree->left);
	if (tree->right)
		hRight = binary_tree_height(tree->right) + 1;
	else
		hRight = binary_tree_height(tree->right);
	return (hLeft - hRight);
}

/**
 *
 *
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

#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if binary tree is full.
 *@tree: ptr to root node.
 *Return: 0 if not full, 1 if full.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (!tree || (tree->left && !tree->right) ||
	(!tree->left && tree->right))
		return (0);
	if (binary_tree_is_leaf(tree) == 1)
		return (1);
	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);

	if ((left == 1) && (right == 1))
		return (1);
	return (0);

}
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

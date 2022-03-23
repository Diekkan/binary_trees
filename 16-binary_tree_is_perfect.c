#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if bt is perfect.
 *@tree: ptr to root node.
 *Return: 1 if perfect, 0 if not.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if ((binary_tree_is_full(tree) == 0))
	{
		return (0);
	}
	else
	{
		if (binary_tree_balance(tree) != 0)
			return (0);
	}
	return (1);
}
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
/**
 * binary_tree_balance - measures the balance factor of a bt.
 *@tree: pointer to root node.
 *Return: return balance factor.
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
 * binary_tree_height - measures height of a bt.
 *@tree: ptr to root node.
 *Return: height of the bt.
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

#include "binary_trees.h"
/**
 * binary_tree_sibling - function that finds the sibling of a node.
 *@node: node to retrieve sibling..
 *Return: sibling ptr or NULL if no sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left != node)
		return (node->parent->left);
	else
		return (node->parent->right);
}

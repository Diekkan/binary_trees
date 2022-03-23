#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node.
 *@parent: pointer to parent.
 *@value: value to be inserted.
 * Return: pointer to new node or NULL if failed.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nNode = malloc(sizeof(binary_tree_t));

	if (!nNode)
		return (NULL);
	nNode->n = value;
	nNode->right = NULL;
	nNode->left = NULL;
	nNode->parent = parent;
	return (nNode);
}

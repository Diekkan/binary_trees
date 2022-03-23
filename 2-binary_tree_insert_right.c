#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts the new node to the right of the parent.
 *@parent: parent node.
 *@value: value to be inserted.
 *Return: nNode or NULL if failed.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nNode = malloc(sizeof(binary_tree_t));

	if (!nNode || !parent)
		return (NULL);
	nNode->left = NULL;
	nNode->right = NULL;
	nNode->parent = parent;
	nNode->n = value;

	if (parent->right)
	{
		nNode->right = parent->right;
		nNode->right->parent = nNode;
	}
	parent->right = nNode;
	return (nNode);
}

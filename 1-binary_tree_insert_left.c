#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts the new node to the left of the parent.
 *@parent: parent node.
 *@value: value to be inserted.
 *Return: nNode or NULL if failed.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nNode = malloc(sizeof(binary_tree_t));

	if (!nNode || !parent)
		return (NULL);
	nNode->n = value;
	nNode->right = NULL;
	nNode->left = NULL;
	nNode->parent = parent;

	if (parent->left)
	{
		nNode->left = parent->left;
		parent->left = nNode;
		nNode->left->parent = nNode;
	}
	parent->left = nNode;
	return (nNode);
}

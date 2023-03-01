#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node as left-child of another node
 * @parent: pointer to node to insert left child in
 * @value: value to store in new node
 *
 * Return: pointer to created node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *NewNode = binary_tree_node(parent, value);

	if (NewNode == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		NewNode->left = parent->left;
		parent->left->parent = NewNode;
	}

	parent->left = NewNode;

	return (NewNode);
}

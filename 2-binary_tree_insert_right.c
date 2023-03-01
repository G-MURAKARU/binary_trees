#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node as right child of another node
 * @parent: pointer to insert right child in
 * @value: value to be inserted
 *
 * Return: pointer to created node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *NewNode;
	if (parent == NULL)
		return (NULL);

	NewNode = binary_tree_node(parent, value);
	if (NewNode == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		NewNode->right = parent->right;
		parent->right->parent = NewNode;
	}

	parent->right = NewNode;

	return (NewNode);
}

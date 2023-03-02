#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a binary tree node
 *
 * @node: node whose sibling is being found
 *
 * Return: pointer to sibling node if present, NULL otherwise
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent_node;

	if (!node || !node->parent)
		return (NULL);

	parent_node = node->parent;

	if (parent_node->left == node)
		return (parent_node->right);
	else if (parent_node->right == node)
		return (parent_node->left);
	else
		return (NULL);
}

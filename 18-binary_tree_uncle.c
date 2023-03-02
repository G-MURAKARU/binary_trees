#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a binary tree node
 *
 * @node: node whose sibling is being found
 *
 * Return: pointer to uncle node if present, NULL otherwise
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent_node;
	binary_tree_t *gp_node;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	parent_node = node->parent;
	gp_node = parent_node->parent;

	if (gp_node->left == parent_node)
		return (gp_node->right);
	else if (gp_node->right == parent_node)
		return (gp_node->left);
	else
		return (NULL);
}

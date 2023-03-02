#include "binary_trees.h"

/**
 * binary_tree_depth - measures depth of node in a tree
 * @tree: pointer to node
 *
 * Return: depth of tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t tree_depth = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent)
		tree_depth += binary_tree_depth(tree->parent) + 1;

	return (tree_depth);
}

#include "binary_trees.h"

/**
 * binary_tree_size - measures size of binary tree
 * @tree: pointer to root node of tree
 *
 * Return: size of binary tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		l += binary_tree_size(tree->left);
	if (tree->right)
		r += binary_tree_size(tree->right);

	return (l + r + 1);
}

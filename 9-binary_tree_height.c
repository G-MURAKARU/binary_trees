#include "binary_trees.h"

/**
 * binary_tree_height - measure height of binary tree
 * @tree: pointer to root node of tree
 *
 * Return: height of tree or 0 if tree is null
 */

size_t binary_tree_height(const binary_tree_t *tree)
{

	size_t left_tree_height = 0;
	size_t right_tree_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		left_tree_height += binary_tree_height(tree->left) + 1;
	}
	if (tree->right)
	{
		right_tree_height += binary_tree_height(tree->right) + 1;
	}

	if (left_tree_height >= right_tree_height)
	{
		return (left_tree_height);
	}
	else{
		return (right_tree_height);
	}
}

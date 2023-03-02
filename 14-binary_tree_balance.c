#include "binary_trees.h"

int helper_func(const binary_tree_t *);

/**
 * binary_tree_balance - finds the balance factor of a binary tree
 *
 * @tree: pointer to the tree's root node
 *
 * Return: height of the tree
 */
size_t binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);

	left = helper_func(tree->left) + 1;
	right = helper_func(tree->right) + 1;
	return ((size_t)(left - right));
}

/**
 * helper_func - finds the height of a binary tree with DFT
 *
 * @tree: pointer to the tree's root node
 *
 * Return: height of the tree
 */
int helper_func(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (-1);

	left = helper_func(tree->left);
	right = helper_func(tree->right);
	return (((left > right) ? left : right) + 1);
}

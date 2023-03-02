#include "binary_trees.h"

int _binary_tree_balance(const binary_tree_t *tree);
int helper_func(const binary_tree_t *);
int _binary_tree_is_full(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: root node of tree to investigate
 *
 * Return: 1 if true, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!_binary_tree_balance(tree) && _binary_tree_is_full(tree))
		return (1);
	return (0);
}

/**
 * _binary_tree_balance - finds the balance factor of a binary tree
 *
 * @tree: pointer to the tree's root node
 *
 * Return: height of the tree
 */
int _binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);

	left = helper_func(tree->left) + 1;
	right = helper_func(tree->right) + 1;
	return (left - right);
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

/**
 * _binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: root node of tree to investigate
 *
 * Return: 1 if full, 0 otherwise
 */
int _binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);

	left = _binary_tree_is_full(tree->left);
	right = _binary_tree_is_full(tree->right);
	return ((left == right) ? 1 : 0);
}

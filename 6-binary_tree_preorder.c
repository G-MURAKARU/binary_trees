#include "binary_trees.h"

/**
 * binary_tree_preorder - go through binary tree using pre-order traversal
 * @tree: pointer to root node of tree
 * @func: pointer to function to call
 *
 * Return: none
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

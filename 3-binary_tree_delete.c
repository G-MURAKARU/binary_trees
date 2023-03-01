#include "binary_trees.h"

/**
 * binary_tree_delete - delete entire binary tree
 * @tree: pointer to root node of tree
 *
 * Return: none
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	/*deleting left sub-tree*/
	binary_tree_delete(tree->left);

	/*deleting right sub-tree*/
	binary_tree_delete(tree->right);

	free(tree);
}

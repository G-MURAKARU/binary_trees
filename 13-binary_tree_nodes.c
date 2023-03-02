#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with at least 1 child in a binary tree
 *
 * @tree: root node of tree to investigate
 *
 * Return: number of such nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t left, right;

    if (!tree)
        return (0);

    if (!tree->left && !tree->right)
        return (0);

    left = binary_tree_nodes(tree->left);
    right = binary_tree_nodes(tree->right);
    return (left + right + 1);
}

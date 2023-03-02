#include "binary_trees.h"

/**
 *
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    if (!tree)
        return (0);

    int left, right;

    left = binary_tree_is_full(tree->left);
    right = binary_tree_is_full(tree->right);
    return ((left == right) ? 1 : 0);
}
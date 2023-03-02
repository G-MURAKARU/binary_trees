#include "binary_trees.h"

int binary_tree_is_perfect(const binary_tree_t *tree)
{
    if (!binary_tree_balance(tree) && binary_tree_is_full(tree))
        return (1);
    return (0);
}

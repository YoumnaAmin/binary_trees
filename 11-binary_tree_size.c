#include "binary_trees.h"

/**
 * binary_tree_size - measures depth
 * @tree: pointer to the root
 * Return: size of type size_t
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
    size_t sizel, sizer;

    if (!tree)
        return (0);

    sizel = binary_tree_size(tree->left);
    sizer = binary_tree_size(tree->right);

    return (1 + sizel + sizer);
}

#include "binary_trees.h"

/**
 * binary_tree_depth - measures depth
 * @tree: pointer to the root
 * Return: depth of type size_t
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;

	if (!tree)
		return (0);
	if (tree->parent)
		depth = 1 + binary_tree_depth(tree->parent);
	return (depth);
}

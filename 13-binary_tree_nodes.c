#include "binary_trees.h"

/**
 * binary_tree_nodes - measures nodes
 * @tree: pointer to the root
 * Return: size of type size_t
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;
	if (!tree)
		return (0);
	nodes = 0;
	while (tree->right != NULL)
	{
		tree = tree->right;
		nodes++;
	}
	while (tree->left != NULL)
	{
		tree = tree->left;
		nodes++;
	}
	return (nodes);
}

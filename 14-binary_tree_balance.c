#include "binary_trees.h"

/**
 * binary_tree_height2 - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the tree, or 0 if tree is NULL.
 */
size_t binary_tree_height2(const binary_tree_t *tree)
{
	size_t height_l, height_r;

	if (!tree)
		return (0);

	height_l = binary_tree_height2(tree->left);
	height_r = binary_tree_height2(tree->right);

	return (1 + (height_l > height_r ? height_l : height_r));
}

/**
 * binary_tree_balance - measures nodes
 * @tree: pointer to the root
 * Return: size of type int
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	balance = binary_tree_height2(tree->left) - binary_tree_height2(tree->right);
	return (balance);
}

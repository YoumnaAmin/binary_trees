#include "binary_trees.h"

/**
 * binary_tree_height - to measure the height
 * @tree: pointer to the root
 * Return: a size_t number presents height
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height, height_l, height_r;

	if (tree == NULL)
		return (0);

	height = 0;
	height_r = 0;
	height_l = 0;
	while (tree->left != NULL)
	{
		height_l++;
		tree = tree->left;
	}
	while (tree->right != NULL)
	{
		height_r++;
		tree = tree->right;
	}
	if (height_r >= height_l)
		height += height_r;
	else
		height += height_l;

	return (height);
}

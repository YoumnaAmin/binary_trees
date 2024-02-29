#include "binary_trees.h"

/**
 * binary_tree_leaves - measures depth
 * @tree: pointer to the root
 * Return: size of type size_t
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/*size_t leavesl, leavesr;*/

	if (!tree)
		return (0);

	if (tree->left != NULL && tree->right != NULL)
		return (2);
	else
		return (1);
}

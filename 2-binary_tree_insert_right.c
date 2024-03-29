#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child
 * @parent: a parent node
 * @value: int value
 * Return: pointer of Node type
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *r_node = NULL;

	if (!parent)
		return (NULL);

	r_node = binary_tree_node(parent, value);

	if (!r_node)
		return (NULL);

	if (parent->right)
	{
		r_node->right = parent->right;
		r_node->right->parent = r_node;
	}
	parent->right = r_node;

	return (r_node);
}

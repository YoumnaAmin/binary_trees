#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: struct type node
 * @value: int type value
 * Return: Node type pointer
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}

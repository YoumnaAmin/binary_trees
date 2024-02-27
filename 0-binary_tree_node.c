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
    newNode->left = NULL;
    newNode->right = NULL;

    if (parent == NULL)
    {
		parent = newNode;
        return (newNode);
    }
    binary_tree_t *ptr = parent;
    binary_tree_t *ptr2 = NULL;

    while (ptr != NULL)
    {
        ptr2 = ptr;
        if (value <= ptr->n)
        {
            ptr = ptr->left;
        }
        else
        {
            ptr = ptr->right;
        }
    }

    if (value <= ptr2->n)
    {
        ptr2->left = newNode;
    }
    else
    {
        ptr2->right = newNode;
    }

    return (newNode);
}

#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function that inserts a node as the
 * right-child of another node
 * @parent: is a pointer to the node to insert the right-child in
 * @value: is the value to store in the new node
 * Return: a pointer to the created node, or NULL
 * on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right = NULL;

	if (!parent)
		return (NULL);

	right = binary_tree_node(parent, value);

	if (parent->right)
	{
		right->right = parent->right;
		parent->right->parent = right;
	}
	parent->right = right;

	return (right);
}

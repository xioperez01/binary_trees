#include "binary_trees.h"

/**
 * binary_tree_is_root - Function that checks if a given node is a root
 * @node: Node to check
 * Return: 1 if node is a root, otherwise 0 and is node is NULL
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
	{
		return (1);
	}

	return (0);
}

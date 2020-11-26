#include "binary_trees.h"

/**
 * binary_tree_depth - Function that measures the height of a binary tree
 * @tree: Tree to measures the height
 * Return: Depth of tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		tree = tree->parent;
		counter++;
	}

	return (counter);
}

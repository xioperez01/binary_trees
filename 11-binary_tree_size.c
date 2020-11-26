#include "binary_trees.h"

/**
 * binary_tree_size - Function that measures the size of a binary tree
 * @tree:  is a pointer to the root node of the tree to measure the size
 * Return: The size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_counter = 0, right_counter = 0;

	if (!tree)
	{
		return (0);
	}

	left_counter = binary_tree_size(tree->left);
	right_counter = binary_tree_size(tree->right);

	return (right_counter + left_counter + 1);
}

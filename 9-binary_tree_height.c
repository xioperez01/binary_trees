#include "binary_trees.h"

/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tree: Tree to measures the height
 * Return: Height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_counter = 0, right_counter = 0;

	if (!tree || (!tree->left && !tree->right))
	{
		return (0);
	}

	left_counter = binary_tree_height(tree->left);
	right_counter = binary_tree_height(tree->right);

	if (left_counter < right_counter)
	{
		return (right_counter + 1);
	}

	return (left_counter + 1);

}

#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with
 * at least 1 child in a binary tree
 * @tree:  Is a pointer to the root node of the tree to count
 * the number of nodes
 * Return: Number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t counter_left = 0, counter_right = 0;

	if (tree && (tree->right || tree->left))
	{
		counter_left = binary_tree_nodes(tree->left);
		counter_right = binary_tree_nodes(tree->right);
	}
	else
	{
		return (0);
	}

	return (counter_left + counter_right + 1);
}

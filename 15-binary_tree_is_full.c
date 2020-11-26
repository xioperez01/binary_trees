#include "binary_trees.h"

/**
 * binary_tree_is_full - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance
 * Return: 1 full 0 fail
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
}

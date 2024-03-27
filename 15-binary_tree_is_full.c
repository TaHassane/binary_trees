#include "binary_trees.h"

/**
 * binary_tree_is_full - check if the binary tree is full
 * @tree: root node.
 *
 * Return: 1 for true otherwise 0 on false.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left != NULL)
		return (0);
	if (tree->right != NULL && tree->left == NULL)
		return (0);

	if (tree->left != NULL &&
			binary_tree_is_full(tree->left) == 0)
		return (0);
	if (tree->right != NULL &&
			binary_tree_is_full(tree->right) == 0)
		return (0);
	return (1);
}

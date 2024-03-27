#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Check if a binary tree is perfect
 * @tree: tree
 *
 * Return: 1 if perfect otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (binary_tree_height(tree->left) !=
			binary_tree_height(tree->right))
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right))
		return (1);
	return (0);
}

/**
 * binary_tree_height - Measure the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: The height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int gauche = 0, droite = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	if (tree->left)
		gauche = 1 + binary_tree_height(tree->left);
	if (tree->right)
		droite = 1 + binary_tree_height(tree->right);

	if (gauche > droite)
		return (gauche);
	return (droite);
}

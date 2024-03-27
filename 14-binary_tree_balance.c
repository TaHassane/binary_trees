#include "binary_trees.h"

/**
 * binary_tree_balance - Measure the balance factor of a binary tree
 * @tree: tree
 *
 * Return: The balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int gauche, droite;

	if (!tree)
		return (0);

	gauche = binary_tree_height(tree->left);
	droite = binary_tree_height(tree->right);

	if (tree->left)
		gauche++;
	if (tree->right)
		droite++;

	return (gauche - droite);
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


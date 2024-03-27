#include "binary_trees.h"

/**
 * binary_tree_node - create a new node
 * @parent: parent
 * @value: value
 * Return: new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newn;

	newn = malloc(sizeof(binary_tree_t));
	if (newn == NULL)
		return (NULL);

	newn->parent = parent;
	newn->n = value;
	newn->left = NULL;
	newn->right = NULL;

	return (newn);
}

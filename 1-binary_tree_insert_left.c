#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node as left child of parent.
 * @parent: parent node.
 * @value: value to give new node.
 *
 * Return: newly created node, NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nouv, *anc;


	if (parent == NULL)
		return (NULL);

	nouv = malloc(sizeof(binary_tree_t));
	if (nouv == NULL)
		return (NULL);

	nouv->n = value;
	nouv->parent = parent;
	nouv->left = NULL;
	nouv->right = NULL;

	if (parent->left != NULL)
	{
		anc = parent->left;
		nouv->left = anc;
		anc->parent = nouv;
	}

	parent->left = nouv;

	return (nouv);
}

#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node as right
 * @parent: parent
 * @value: value
 *
 * Return: newly created node, NULL on failure.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nouv;


	if (parent == NULL)
		return (NULL);

	nouv = malloc(sizeof(binary_tree_t));
	if (nouv == NULL)
		return (NULL);

	nouv->n = value;
	nouv->left = NULL;
	nouv->right = NULL;
	nouv->parent = parent;

	if (parent->right != NULL)
	{
		nouv->right = parent->right;
		nouv->right->parent = nouv;
	}

	parent->right = nouv;

	return (nouv);

}

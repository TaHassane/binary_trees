#include "binary_trees.h"

/**
 * binary_tree_depth - find the depth of a given node.
 * @tree: node to measure.
 *
 * Return: depth of node, otherwise 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int c = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);
	c = binary_tree_depth(tree->parent);
	return (c + 1);
}

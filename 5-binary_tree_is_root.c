#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root node
 *
 * @node: The node to consider
 *
 * Return: 1 (node is a root) or 0 (node is not root or is NULL)
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->parent)
		return (0);
	else
		return (1);
}

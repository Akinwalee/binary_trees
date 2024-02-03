#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 *
 * @node: The node to consider
 *
 * Return: 1 (Node is a leaf) or 0 (bode is not a leaf or NULL)
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->left && node->right)
		return (0);
	else
		return (1);
}

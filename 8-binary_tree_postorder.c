#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a tree using post-order traversal
 *
 * @tree: The binary tree to traverse
 * @func: function that accepts value of each node
 *
 * Return: void.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a tree using pre-order traversal
 *
 * @tree: The binary tree to traverse
 * @func: function that accepts value of each node
 *
 * Return: void.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

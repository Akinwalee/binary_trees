#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a tree using in-order traversal
 *
 * @tree: The binary tree to traverse
 * @func: Function that accepts the value of each node
 *
 * Return: void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}

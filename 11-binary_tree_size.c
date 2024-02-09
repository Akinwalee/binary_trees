#include "binary_trees.h"

/**
 * binary_tree_size - Goes through a tree using pre-order traversal
 *
 * @tree: The binary tree to traverse
 * @func: function that accepts value of each node
 *
 * Return: void.
 */

 size_t size;

void binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return;
    
	size++;
	binary_tree_size(tree->left);
	binary_tree_size(tree->right);

    return (size)
}

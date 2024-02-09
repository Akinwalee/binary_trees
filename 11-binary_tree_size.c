#include "binary_trees.h"

/**
 * binary_tree_size - Finds the size of a binary tree
 *
 * @tree: The binary tree to find its size
 *
 * Return: The size of the tree.
 */

 size_t size = 0;

void binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return;
    
	size++;
	binary_tree_size(tree->left);
	binary_tree_size(tree->right);

    return (size)
}

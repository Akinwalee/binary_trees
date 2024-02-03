#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right child of another node
 *
 * @parent: The parent of the new left child
 * @value: The value of the child
 *
 * Return: Pointer to the new node. NULL if failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (parent->right)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
		parent->right = new_node;
	}
	else
	{
		parent->right = new_node;
	}

	return (new_node);
}

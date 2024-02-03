#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child of another node
 *
 * @parent: The parent of the new left child
 * @value: The value of the child
 *
 * Return: Pointer to the new node. NULL if failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
	binary_tree_t *left = NULL;

	if ((!new_node) || (!parent))
		return (NULL);

	if (parent->left)
	{
		left = parent->left;
		new_node = binary_tree_node(parent, value);
		new_node->left = left;
	}
	else
	{
		new_node = binary_tree_node(parent, value);
		parent->left = new_node;
	}

	return (new_node);
}

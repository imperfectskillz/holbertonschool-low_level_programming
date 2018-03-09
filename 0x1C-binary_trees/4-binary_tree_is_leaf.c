#include "binary_trees.h"

/**
 *binary_tree_is_leaf - checks if leaf or not
 *@node: node to be checked
 *Return: true or false
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}

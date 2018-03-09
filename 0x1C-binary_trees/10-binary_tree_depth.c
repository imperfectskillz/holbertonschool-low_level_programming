#include "binary_trees.h"

/**
 *binary_tree_depth- measures depth
 *@node: to the node
 *Return: depth
 */

size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t count;

	if (node == NULL || node->parent == NULL)
		return 0;

	count = binary_tree_depth(node->parent) + 1;

	return count;
}

#include "binary_trees.h"

/**
 *binary_tree_size - measures size
 *@tree: tree
 *Return: size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t total;

	if (tree == NULL)
		return 0;

	total = binary_tree_size(tree->right) + binary_tree_size(tree->left) + 1;

	return (total);
}

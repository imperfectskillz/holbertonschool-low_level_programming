#include "binary_trees.h"

/**
 *binary_tree_is_perfect - checks if perfect
 *@tree: tree
 *Return: true or false
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l = 0;
	int r = 0;

	if (tree == NULL)
		return 0;

	if (tree->left == NULL && tree->right != NULL)
		return 0;

	if (tree->left != NULL && tree->right == NULL)
		return 0;

	if (tree->left != NULL && tree->right != NULL)
		return 1;

	left += binary_tree_is_perfect(tree->left);
	right += binary_tree_is_perfect(tree->right);

	if (tree->parent != NULL)
		return (left + right);
	else
		return (right == left && (left + right)
	return (0);
}

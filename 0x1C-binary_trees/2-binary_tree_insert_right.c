#include "binary_trees.h"

/**
 *binary_tree_insert_right - inserts to the right
 *@parent: parent pointer
 *@value: value
 *Return: pointer
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	temp = malloc(sizeof(binary_tree_t));
	if (temp == NULL)
		return NULL;
	if (parent == NULL)
		return NULL;

	temp->n = value;
	temp->parent = parent;
	temp->left = NULL;
	temp->right = NULL;
	if (parent->right != NULL)
	{
		temp->right = parent->right;
		parent->right->parent = temp;
	}
	parent->right = temp;
	return temp;
}

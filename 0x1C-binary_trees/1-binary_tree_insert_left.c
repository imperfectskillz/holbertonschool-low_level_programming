#include "binary_trees.h"

/**
 *binary_tree_insert_left - inserts left node
 *@parent: parent node
 *@value: value
 *Return: pointer
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	if (parent == NULL)
		return NULL;
	temp = malloc(sizeof(binary_tree_t));
	if (temp == NULL)
		return NULL;

	temp->n = value;
	temp->parent = parent;
	temp->right = NULL;
	temp->left = NULL;

	if (parent->left != NULL)
	{
		temp->left = parent->left;
		parent->left->parent = temp;
	}
	parent->left = temp;
	return (temp);
}

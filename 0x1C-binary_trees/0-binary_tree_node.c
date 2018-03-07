#include "binary_trees.h"

/**
 *binary_tree_node - creates node
 *@parent: parent node
 *@value: node value
 *Return: pointer
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	temp = malloc(sizeof(binary_tree_t));

	temp->n = value;
	temp->parent = parent;
	temp->left = NULL;
	temp->right = NULL;

	return temp;
}

#include "binary_trees.h"

/**
 * binary_tree_insert_right -  inserts a node as right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Description: If parent has a right-child, the new node must take its place,
 *              and the old right-child set as the right-child of the new node
 * Return: pointer to created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
	{
		return (NULL);
	}

	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
	}
	parent->right = newNode;
	return (newNode);
}

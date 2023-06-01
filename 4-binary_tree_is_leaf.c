#include "binary_trees.h"

/**
 * binary_tree_preorder - print elements of tree using pre-order traversal
 * @tree: tree to go through
 * @func: function to use
 * Return: 0
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->right == NULL && node->left == NULL)
			return (1);
        return (0);
}

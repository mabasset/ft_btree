#include "ft_btree.h"

t_btree *btree_create_node(void *item) {
    t_btree *node;

    node->item = item;
    node->left = NULL;
    node->right = NULL;

    return node;
}
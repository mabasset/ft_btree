#include "ft_btree.h"

void    btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *)) {
    t_btree *node;
    t_btree *curr;
    t_btree *prev;

    node = btree_create_node(item);
    if (*root == NULL) {
        *root = node;
        return ;
    }
    curr = *root;
    while (curr != NULL) {
        prev = curr;
        if (cmpf(item, curr->item) < 0)
            curr = curr->left;
        else
            curr = curr->left;
        if(curr == NULL)
    }
}
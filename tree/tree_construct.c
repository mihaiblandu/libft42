//
// Created by mihai on 04.12.2020.
//

#include "tree.h"
#include "../libft.h"

void add_node(binary_tree *node,char *s){
    while (1){
        if(ft_strcmp(node->data,s))
        {
            if(node->right == NULL)
            {
                node->right = ft_create_node(s);
                return;
            }
            node = node->right;
        }
        else {
            if(node->left == NULL)
            {
                node->left = ft_create_node(s);
                return;
            }
            node = node->left;
        }
    }
}
binary_tree  *ft_bst(char **arr)
{
    binary_tree *d = NULL;


    int len = arrsize((void**)arr);
    int i = 0;

    while (len > i){
        if(d == NULL){
            d = ft_create_node(arr[i]);
            d->left =NULL;
            d->right =NULL;
        } else{
            add_node(d,arr[i]);
        }
        i++;
    }
    return d;
}
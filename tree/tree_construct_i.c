//
// Created by mihai on 04.12.2020.
//

#include "tree.h"
#include "../libft.h"

void smaller(binary_tree_i *node,int i){
    while (1){
        if(node->right == NULL)
        {
            node->right = ft_create_node_i(i);
            return;
        }
        node = node->right;
    }
}
void bigger_equals(binary_tree_i *node,int i){
    while (1){
        if(node->left == NULL)
        {
            node->left = ft_create_node_i(i);
            return;
        }
        node = node->left;
    }
}
void add_node_i(binary_tree_i *node,int i){
    while (1){

    if( i > node->data)
        {
            if(node->right == NULL)
            {
                node->right = ft_create_node_i(i);
                return;
            }
            node = node->right;
        }
        else {
            if(node->left == NULL)
            {
                node->left = ft_create_node_i(i);
                return;
            }
            node = node->left;
        }
    }
}
binary_tree_i  *ft_bst_i(int *arr,int len)
{
    binary_tree_i *d = NULL;
    int i = 0;
    while (len > i){
        if(d == NULL){
            d = ft_create_node_i(arr[i]);
        } else{
            add_node_i(d,arr[i]);
        }
        i++;
    }
    return d;
}
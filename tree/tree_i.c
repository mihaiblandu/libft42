//
// Created by mihai on 02.12.2020.
//
#include "tree.h"
#include "../libft.h"

binary_tree_i *ft_create_node_i(int data)
{
    binary_tree_i *node;
    node = (binary_tree_i *) malloc(sizeof(binary_tree_i));

    node->root = NULL;
    node->left = NULL;
    node->right = NULL;

    node->data = data;
    return (node);
};
binary_tree_i *add_left_i(binary_tree_i *root,binary_tree_i *node)
{
    root->left = node;
    return (node);
};
binary_tree_i *add_right_i(binary_tree_i *root,binary_tree_i *node)
{
    root->right = node;
    return (node);
};
int ft_delete_node_i(binary_tree_i *node)
{
    if (node == NULL)
        return 1;

    if(node->left != NULL)
        ft_delete_node_i(node->left);
    if(node->right != NULL)
        ft_delete_node_i(node->right);
    free(node);
    node->root=NULL;
    node->left=NULL;
    node->right=NULL;
    node->data=0;
    return (0);
}
void ft_display_data_i(binary_tree_i *root){
    if(root == NULL)
        return;
    ft_putstr(">>>\t");
    ft_putendl(ft_itoa(root->data));
    if(root->left != NULL)
        ft_display_data_i(root->left);
    if(root->right != NULL)
        ft_display_data_i(root->right);
}
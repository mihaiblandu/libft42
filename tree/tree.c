//
// Created by mihai on 02.12.2020.
//
#include "tree.h"
#include "../libft.h"

binary_tree *ft_create_node(char *data)
{
    binary_tree *node;
    node = (binary_tree*) malloc(sizeof(binary_tree));

    node->root = NULL;
    node->left = NULL;
    node->right = NULL;
    //node->data = malloc(sizeof(char )*ft_strlen(data));
    //ft_bzero(node->data,ft_strlen(data));
    node->data = data;
    return (node);
};
binary_tree *add_left(binary_tree *root,binary_tree *node)
{
    root->left = node;
    return (node);
};
binary_tree *add_right(binary_tree *root,binary_tree *node)
{
    root->right = node;
    return (node);
};
int ft_delete_node(binary_tree *node)
{
    if (node == NULL)
        return 1;

    if(node->left != NULL)
        ft_delete_node(node->left);
    if(node->right != NULL)
        ft_delete_node(node->right);
    free(node);

    return (0);
}
void ft_display_data(binary_tree *root){
    if(root == NULL)
        return;
    if(root->data != NULL){
        ft_putstr(">>>\t");
        ft_putendl(root->data);
    }
    if(root->left != NULL)
        ft_display_data(root->left);
    if(root->right != NULL)
        ft_display_data(root->right);
}
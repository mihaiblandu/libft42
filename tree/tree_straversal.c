//
// Created by mihai on 04.12.2020.
//

#include <stddef.h>
#include "tree.h"
void ft_in_order(binary_tree *root,int(*f(binary_tree *node)))
{
        if(root->left != NULL)
            ft_in_order(root->left,f);
        if(f(root) == 0)
            return;
        if(root->right != NULL)
            ft_in_order(root->right,f);
}
void ft_post_order(binary_tree *root,int(*f(binary_tree *node)))
{
    if(root->left != NULL)
        ft_post_order(root->left,f);
    if(root->right != NULL)
        ft_post_order(root->right,f);
    f(root);
}
void ft_pre_order(binary_tree *root,int(*f(binary_tree *node)))
{
    if (root == NULL)
        return;
    if(f(root)== 0)
        return;
    ft_pre_order(root->left,f);
    ft_pre_order(root->right,f);
}
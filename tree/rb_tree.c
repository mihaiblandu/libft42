//
// Created by mihai on 14.12.2020.
//

#include "tree.h"
#include "../libft.h"

// global root for the entire tree
struct node* piq = NULL;
rb_tree *bst_add(rb_tree *trav, rb_tree *temp)
{
    if(trav == NULL)
        return temp;

    if(temp->d < trav->d)
    {
        trav->l = bst_add(trav->l, temp);
        trav->l-> p = trav;
    }  else if (temp->d > trav->d)
    {
        trav->r = bst_add(trav->r, temp);
        trav->r->p = trav;
    }
    return trav;
}

void leftrotate(rb_tree * root)
{
    //Save middle R
    rb_tree *right = root->r;
    //make root child the L child of middle
    root->r = right->l;
    //set parent
    if(root->r)
        root->r->p = root;
    right->p = root->p;
    if (!root->p)
        piq = right;
    else if (root == root->p->l)
        root->p->r = right;
    right->l = root;
    root->p = right;

}
void rightrotate(rb_tree * temp)
{
    rb_tree *right_node = temp->r;
}
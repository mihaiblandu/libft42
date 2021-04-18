/*
* Created by mihai on 02.12.2020.
*/

#ifndef LIBFT_TREE_H
# define LIBFT_TREE_H
#define SIZEOF(a) sizeof(a)/sizeof(*a)


typedef struct rb_t {
    int d; // data
    int c; // 1-red, 0-black
    struct rb_t* p; // parent
    struct rb_t* r; // right-child
    struct rb_t* l; // left child
}               rb_tree;

typedef struct	binary_tree_t {
	struct	binary_tree_t	*left;
	struct	binary_tree_t	*right;
	struct	binary_tree_t	*root;
	char			*data;
}		binary_tree;
typedef struct	binary_tree_s {
    struct	binary_tree_s	*left;
    struct	binary_tree_s	*right;
    struct	binary_tree_s	*root;
    int		                data;
}		binary_tree_i;
typedef struct	binary_tree_array_t {
    char			*data;
}		            binary_tree_array;
binary_tree *ft_create_node(char *data);
binary_tree *add_left(binary_tree *root,binary_tree *node);
binary_tree *add_right(binary_tree *root,binary_tree *node);
/*
 *  Node for int
 * */
binary_tree_i *ft_create_node_i(int data);
binary_tree_i *add_left_i(binary_tree_i *root,binary_tree_i *node);
binary_tree_i *add_right_i(binary_tree_i *root,binary_tree_i *node);
int ft_delete_node_i(binary_tree_i *node);
void ft_display_data_i(binary_tree_i *root);

int ft_delete_node(binary_tree *node);
void ft_display_data(binary_tree *root);
void ft_in_order(binary_tree *root,int(*f(binary_tree *node)));
void ft_post_order(binary_tree *root,int(*f(binary_tree *node)));
void ft_pre_order(binary_tree *root,int(*f(binary_tree *node)));

binary_tree  *ft_bst(char **arr);
binary_tree_i  *ft_bst_i(int *arr,int len);
#endif //LIBFT_TREE_H

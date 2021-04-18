//
// Created by mihai on 25.11.2020.
//

#ifndef LIBFT_LIST_H
#define LIBFT_LIST_H
t_list*         ft_lstnew(void *content);
void            ft_lstdelone(t_list *list, void (*del)(void*));
void	        ft_lstadd_front(t_list **list, t_list *new);
void	        ft_lstadd_back(t_list **list, t_list *new);
int             ft_lstsize(t_list *list);
t_list	        *ft_lstlast(t_list *lst);
void            ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void	        ft_lstclear(t_list **lst, void (*del)(void *));
#endif //LIBFT_LIST_H

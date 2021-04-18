//
// Created by mihai on 25.11.2020.
//
#include "../libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list	*current_elem;
    t_list	*next_elem;

    next_elem = *lst;
    while (next_elem)
    {
        current_elem = next_elem;
        next_elem = current_elem->next;
        ft_lstdelone(current_elem, del);
    }
    *lst = NULL;
}
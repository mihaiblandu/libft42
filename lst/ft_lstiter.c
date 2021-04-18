//
// Created by mihai on 25.11.2020.
//

#include "../libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *))
{
    while (lst)
    {
        f(lst->content);
        lst = lst->next;
    }
}
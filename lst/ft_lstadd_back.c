//
// Created by mihai on 25.11.2020.
//

#include "../libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
    t_list	*tmp;

    if (alst)
    {
        if (*alst == NULL)
            *alst = new;
        else
        {
            tmp = ft_lstlast(*(alst));
            tmp->next = new;
        }
    }
}


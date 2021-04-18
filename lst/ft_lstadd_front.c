//
// Created by mihai on 25.11.2020.
//

#include "../libft.h"
void	ft_lstadd_front(t_list **list, t_list *new)
{
       new->next = *list;
       *list = new;
}

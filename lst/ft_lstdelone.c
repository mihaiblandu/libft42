//
// Created by mihai on 25.11.2020.
//

#include "../libft.h"

void ft_lstdelone(t_list *list, void (*del)(void*))
{
    if(!list)
        return;
    if(del)
        del(list->content);
    free(list);
}
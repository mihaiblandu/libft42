
#include "../libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
    t_list *new;
    t_list *temp;

    temp = (*f)(lst);
    new = temp;
    if (!new)
        return (NULL);
    while (lst->next)
    {
        lst = lst->next;
        temp->next = (*f)(lst);
        if (!temp->next)
            return (NULL);
        temp = temp->next;
    }
    return (new);
}
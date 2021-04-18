#include "../libft.h"

t_list			*ft_lstnew(void *d) {
    t_list *ret;

    if(!(ret = malloc(sizeof(t_list))))
            return (NULL);
    ret->next = NULL;
    ret->content = d;
    return (ret);
}

t_list	*lstnew(void *content)
{
    t_list	*new_elem;

    if (!(new_elem = malloc(sizeof(t_list))))
        return (NULL);
    new_elem->content = content;
    new_elem->next = NULL;
    return (new_elem);
}
/*
t_list * ft_lstnew(void const *content, size_t content_size)
{
    t_list *list;

    if(!(list = (t_list*)malloc(sizeof(t_list)))){
        return (NULL);
    }
    if(!content_size)
    {
        list->content = NULL;
        list->content_size = 0;
        return (list);
    } else {
        if (!(list->content = ft_memalloc(content_size)))
        {
            free(list);
            return (NULL);
        }
        ft_memcpy(list->content,content,content_size);
        list->content_size = content_size;
    }
    list->next = NULL;
    return (list);
}*/

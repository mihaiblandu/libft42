//
// Created by mihai on 28.11.2020.
//
#include "../libft.h"
#include "queue.h"
t_line *ft_new_queue_el(t_line *prev,char *s)
{

    t_line *line = (t_line*)malloc(sizeof(t_line));

    line->line = ( char* )malloc( ( ft_strlen(s) + 1 ) * sizeof( char ) );
    line->line = s;
    line->status = 'n';
    if(prev != NULL)
        prev->next = line;
    line->prev = prev;
    line->index = line->prev == NULL ? 0: line->prev->index + 1;
    return line;
}

int ft_queue_size(t_line *queue)
{
    int     i;
    t_line *begin;

    i = 0;
    begin = ft_get_queue_head(queue);
    while (begin)
    {
        begin = begin->next;
        i++;
    }
    return (i);
}
t_line *ft_get_queue_head(t_line *prev)
{
    t_line *head;

    if(!prev)
        return (NULL);
    head = prev;
    while (head)
    {
        if(head->prev == NULL)
            break;
        head = head->prev;
    }
    return head;
}

t_line *ft_get_queue_tail(t_line *next)
{
    t_line *tail;

    if(!next)
        return (NULL);
    tail = next;
    while (tail)
    {
        if(tail->next == NULL)
            break;
        tail = tail->next;
    }
    return tail;
}

int ft_queue_isfull(t_line *el)
{
    t_line *head;
    head = ft_get_queue_head(el);
    return ft_queue_size(head);
}
int ft_queue_isempty(t_line *el)
{
    t_line *head;

    if(!el)
        return (0);
    head = ft_get_queue_head(el);
    return (ft_queue_size(head) == 0 ? 1 : 0);
}




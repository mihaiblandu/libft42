//
// Created by mihai on 26.11.2020.
//
#include <z3.h>
#include "../libft.h"

void *copy_memory(char *a,char *b, int first, int second)
{
    int i;
    int j;
    int len;
    char *mem;

    i = 0;
    len = first + second;
    mem = ft_memalloc(len);
    while(i < first)
    {
        mem[i] = a[i];
        i++;
    }
    j = 0;
    while(i < len)
    {
        mem[i] = b[j];
        i++;
        j++;
    }
    mem[i] = '\0';
    return mem;
}

void addlast(t_queue *queue, void *el, int len)
{
    t_element   *element;
    char        *str;
    char        *first;
    int         first_len;

    first = ft_strnew(0);
    if(len <= 0)
        return;
    if(!queue->head)
        queue->head = new_element();
    element = queue->head;
    while (1)
    {
        if(!element->next)
            break;
        element = element->next;
    }
    str = (char *) el;
    if(element->status == 'i')
    {
        if ((first_len = ft_contains(el,'\n',len) + 1) > 0)
        {
            first = copy_memory(element->line,str,element->size,first_len);
            element->status = 'f';
            element->line = first;
            queue->size++;
            addlast(queue, str + first_len, len - first_len + 1);
        } else{
            element->line = copy_memory(element->line,str,element->size,len);
            element->size = len;
        }

    } else{
        if ((first_len = ft_contains(el,'\n',len) + 1) > 0)
        {
            first = copy_memory(first,str,0,first_len);
            element =  add_element(queue,first,first_len);
            element->status = 'f';
            addlast(queue, str + first_len, len - first_len);
        } else{
            add_element(queue,str,len);
        }
    }
}
int     get_next_line(const int fd, char **line)
{
    static t_queue *queue;
    char        buffer[BUFF];
    char        *bs;
    int         buff_len;
    int         second_len;
    t_element   *element;

    second_len = 0;
    if(!queue)
        queue = new_queue();
    if(!fd || line == NULL)
        return (1);
    if(queue->head && queue->head->status == 'f')
    {
        element =  rem(queue);
        *line = element->line;
        free(element);
        return (0);
    }
    while ((buff_len = read(fd, buffer, BUFF)) > 0)
    {
        if(ft_contains(buffer,'\n', buff_len) >= 0)
        {
            bs = copy_memory(bs,buffer,second_len,buff_len);
            addlast(queue,bs,buff_len + second_len - 1);
            if(queue->head != NULL && queue->head->status == 'f')
            {
                element =  rem(queue);
                *line = element->line;
                free(element);
                return (0);
            }
            break;
        }
        bs = copy_memory(bs, buffer,second_len,buff_len);
        second_len = second_len + buff_len;
    }
    if(queue->size > 0  || second_len > 0)
        *line = second_len > 0 ? bs : rem(queue)->line;
    else
        *line = NULL;
    return (0);
}

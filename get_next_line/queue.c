//
// Created by mihai on 22.12.2020.
//
#include "get_next_line.h"
#include "../libft.h"

t_queue *new_queue(){
    t_queue *queue;

    queue = (t_queue*) malloc(sizeof(t_queue));
    queue->size = 0;
    queue->head = NULL;
    queue->tail = NULL;
    return (queue);
}
t_element *new_element()
{
    t_element   *element;

    element = (t_element*)malloc(sizeof(t_element));
    element->size = 0;
    element->line = NULL;
    element->next = NULL;
    element->prev = NULL;
    /*
     * i initial
     * f full
     * p partial
     */
    element->status = 'i';
    return (element);
}
t_element *add_element(t_queue *queue, void *el, int len)
{
    t_element   *element;
    t_element   *temp;

    element = new_element();
    element->line = (char *)malloc(len*sizeof(char));
    element->size = len;
    if(!queue)
        queue = new_queue();
    if(queue->size == 0)
    {
        queue->head = element;
        ft_memcpy(element->line, el, len);
        queue->size = 1;
        return (element);
    }
    temp = queue->head;
    while (1)
    {
        if(!temp->next)
            break;
        temp = temp->next;
    }
    temp->next = element;
    element->prev = temp;
    ft_memcpy(element->line, el, len);
    queue->size++;
    return (element);
}
t_element *rem(t_queue *queue)
{
    t_element *temp;

    if(queue->size == 1) {
        temp = queue->head;
        queue->head = NULL;
        queue->size = 0;
        return (temp);
    }
    if(queue->size > 1 )
    {
        temp = queue->head;
        queue->head = temp->next;
        queue->head->prev = NULL;
        queue->size =queue->size - 1;
        temp->next = NULL;
        return (temp);
    }
    return (NULL);
}
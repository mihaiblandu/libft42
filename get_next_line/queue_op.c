//
// Created by mihai on 28.11.2020.
//

#include <z3.h>
#include "queue.h"
#include "../libft.h"

t_line *pop(t_line *el)
{
    return ft_get_queue_head(el);
}
/*
t_line *push(char *s,t_line *queue)
{
    t_line *el;
    t_line *head;
    char *firstpart;
    int     i;
    int     j;

    if(ft_strlen(s) ==0)
        return (queue);
    head = ft_get_queue_tail(queue);
    i = ft_contains(head->line,'\n');
    head->status = i == -1 ? 'p':'f';
    if (head->status == 'p'){
        i = ft_contains(s,'\n');
        if(i > 0){
            firstpart = ft_strnew(i+1);
            //ft_strlcpy(firstpart,s,i +2);
            ft_memcpy(firstpart,s,i + 1);

            head->line = ft_strjoin(head->line,firstpart);
            printf("%s\n",head->line);
            head->status = 'f';
            push(s+i+1,head);

        }else if(i ==0)
        {
            // can be solvable
            head->line = ft_strjoin(head->line,"\n");
            if(s+1 != NULL)
                push(s+1 ,head);
        }
        else{
            //
            head->line = ft_strnew(ft_strlen(s));
            head->line = s;
        }
        //free(firstpart);
    }else if((j=ft_contains(s,'\n'))>-1){
        firstpart = ft_strnew(j+1);
        ft_strlcpy(firstpart,s,j+2);
       // secondpart = ft_strcpy(secondpart,s+j);
        el = ft_new_queue_el(queue,firstpart);
        //queue->prev = el;
        //el->next = queue;
       // el->status = 'f';
       // free(firstpart);

        push(s+ j+1 ,el);
    } else{
        el = ft_new_queue_el(queue,s);
        //el->status = 'p';
    }
    return (el);
}
 */
int delete(t_line *el)
{
    t_line *head;

    if(!el)
        return (0);
    head = el;
    free(head->line);
    free(head);
    head = NULL;
    return (1);
}
//
// Created by mihai on 26.11.2020.
//

#ifndef LIBFT_GET_NEXT_LINE_H
#define LIBFT_GET_NEXT_LINE_H
# define BUFF 100
typedef struct		s_element
{
    char 		        *line;
    int                 size;
    char                status;
    struct s_element	*next;
    struct s_element 	*prev;
}			            t_element;

typedef struct  s_queue
{
    t_element   *head;
    t_element   *tail;
    int         size;
}               t_queue;
int     get_next_line(const int fd, char **line);
void    *copy_memory(char *a,char *b, int first, int second);
t_queue *new_queue();
t_element *new_element();
t_element *add_element(t_queue *queue, void *el, int len);
t_element *peek(t_queue *queue);
t_element *rem(t_queue *queue);
#endif //LIBFT_GET_NEXT_LINE_H

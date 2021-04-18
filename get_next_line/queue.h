//
// Created by mihai on 28.11.2020.
//

#ifndef LIBFT_QUEUE_H
#define LIBFT_QUEUE_H
typedef struct		s_line
{
    char            status;
    void 		    *line;
    struct s_line	*next;
    struct s_line	*prev;
    int             size;
    int             index;
}			        t_line;

t_line      *ft_new_queue_el(t_line *prev,char *s);
int         ft_queue_size(t_line *queue);
t_line      *ft_get_queue_head(t_line *prev);
t_line      *ft_get_queue_tail(t_line *next);
int         ft_queue_isfull(t_line *el);
int         ft_queue_isempty(t_line *el);
t_line       *pop(t_line *el);
t_line      *push(char *s,t_line *queue);
int         delete(t_line *el);

#endif //LIBFT_QUEUE_H
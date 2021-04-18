//
// Created by mihai on 24.11.2020.
//

#ifndef LIBFT_STRING_FUNCTIONS_H
#define LIBFT_STRING_FUNCTIONS_H

char*   replace_char(char *s, char c1, char c2);
char*   replace_with_space(char *s, char c);
int	    ft_str_is_alpha(char *str);
int     ft_str_is_numeric(char *str);
int     ft_str_is_lowercase(char *str);
int     ft_str_is_printable(char *str);
int     ft_str_is_empty(const char *s);
void    remove_spaces(char *str);
#endif //LIBFT_STRING_FUNCTIONS_H

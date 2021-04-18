/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihai <mihai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 23:40:45 by mihai             #+#    #+#             */
/*   Updated: 2020/11/23 14:58:00 by mihai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# define _7BITS 127
# define _8BITS 255
# define _11BITS 2047
# define _16BITS 65535
# define _00000111 7
# define _00001111 15
# define _00011111 31
# define _00111111 63
# define _10000000 128
# define _11000000 192
# define _11100000 224
# define _11110000 240

typedef struct		s_list
{
	void		*content;
	size_t		content_size;
	struct s_list	*next;
}			t_list;
void*			ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t n);
void*			ft_memcpy(void *dst, const void *src, size_t n);
void*			ft_memccpy(void *dst, const void *src, int c, size_t n);
void*			ft_memmove(void *dst, const void *src, size_t len);
void*			ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			ft_memdel(void **ap);
size_t      	ft_strlen(const char *s);
char*			ft_strcpy(char *dst, const char *src);
char*			ft_strncpy(char *dst, const char *src, size_t len);
int				ft_strcmp(const char *s1, const char *s2);
char*			ft_strnew(size_t size);
void			ft_strdel(char **as);
char*			ft_strdup(const char *s);
char*			ft_strcat(char *dest, const char *src);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
size_t			ft_strnlen(const char *s, size_t maxlen);
char*			ft_strchr(const char *s, int c);
char*			ft_strrchr(const char *s, int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char	        *ft_strndup(const char *s1, size_t n);
char*			ft_strstr(const char *haystack, const char *needle);
char*			ft_strnstr(const char *haystack, const char *needle, size_t len);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
void			ft_strclr(char *s);
void*			ft_calloc(size_t count, size_t size);
char*			ft_memalloc(size_t size);
int     		ft_isdigit(int c);
int     		ft_isalpha(int c);
extern int     		ft_isalnum(int c);
int     		ft_isspace(int c);
int	    		ft_isblank(int c);
int     		ft_isascii(int c);
int     		ft_isprint(int c);
int	    		ft_tolower(int c);
int	    		ft_toupper(int c);
int     		ft_atoi(const char *s);
int		        ft_atoi_max(const char *str);
void    		ft_striter(char *s, void (*f)(char *));
void    		ft_striteri(char *s, void (*f)(unsigned int,char *));
void		    ft_striterator(char *s, void (*f)(unsigned int,char));
char*       	ft_strmap(char *s, char (*f)(char));
char*       	ft_strmapi(char *s, char (*f)(unsigned int,char));
int 			ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char*			ft_strsub(char const *s, unsigned int start, size_t len);
char*			ft_substr(char const *s, unsigned int start, size_t len);
char*   		ft_strjoin(char const *s1, char const *s2);
char*			ft_strtrim(const char *s, const char *set);
void 			ft_putchar(int c);
int 			ft_putwchar(int c);
void            ft_putchar_fd(char c,int fd);
void            ft_putnbr(int n);
void            ft_putnbr_fd(int n, int fd);
void			ft_putstr(char *s);
void            ft_putstr_fd(char  *s, int fd);
void            ft_putendl(char  *s);
void            ft_putendl_fd(char  *s, int fd);
char*			ft_strrev(char *s);
char*  			ft_strtrimr(char *s);
char*           ft_strtriml(char *s);
char*           ft_trim(char *s);
char*           ft_itoa(int n);
char**          ft_strsplit(char const *s, char c);
char**          ft_split(char const *s, char c);
size_t          ft_count_words(const char *s);
int             ft_cwchar(char *str, char c);
int             arrsize(void **arr);
int             ft_contains(char *str,char c, int len);
void            ft_print_bits(unsigned int b);
void            print_bits(unsigned char octet);
void            writebits (const unsigned long v, int fd);
#include "lst/list.h"
#include "string/string_functions.h"
#include "get_next_line/get_next_line.h"
#endif

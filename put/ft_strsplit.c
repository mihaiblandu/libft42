/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihai <mihai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:50:00 by mihai             #+#    #+#             */
/*   Updated: 2020/11/23 11:50:01 by mihai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char *ft_copy(char *tmp, int k, int i);
size_t  wc(const char *s, char chr);
char ** ft_strsplit(char const *s, char c)
{
    int  w;
    char    *tmp;
    char    **tab;
    int     i;
    int     j;
    int     k;

    i = 0;
    j = 0;
    k = 0;
    tmp = ft_strnew(ft_strlen(s));
    ft_strcpy(tmp,s);
    w = wc(tmp,c);
    tab = malloc(sizeof(char*)*(w+1));
    if(!tab || ft_str_is_empty(tmp))
        return (NULL);
    while (i < w){
        j = k;
        while (!ft_isspace(tmp[j]) && tmp[j] != 0)
            j++;
        tab[i] = ft_copy(tmp,k,(j - k));
        k = j + 1;
        i++;
    }
    free(tmp);
    return (tab);
}

char *ft_copy(char *tmp, int start, int size) {
    char    *s;
    int     i;

    i = 0;
    s = ft_strnew(size);

    while (i < size)
    {
        s[i] = tmp[start + i];
        i++;
    }
        s[i] = '\0';
    return (s);
}
size_t  wc(const char *s, char chr)
{
    char    *c;
    int     j;
    size_t  i;

    j = 0;
    c = ft_strnew(ft_strlen(s));
    i = 0;
    ft_strcpy(c, s);
    ft_trim(c);
    while (c[j] != '\0')
    {
        if ( (!(c[j] == chr) && (c[j + 1] == chr)) \
        || (!(c[j] == chr) && (c[j + 1] == '\0')))
            i++;
        j++;
    }
    free(c);
    return (i);
}
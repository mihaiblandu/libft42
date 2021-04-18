/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihai <mihai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 01:39:03 by mihai             #+#    #+#             */
/*   Updated: 2020/11/23 01:59:52 by mihai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char*   ft_strjoin(char const *s1, char const *s2)
{
    int j;
    char   *tmp;

    if(!s1 || !s2)
        return (NULL);
    j = ft_strlen(s1) + ft_strlen(s2);
    tmp = ft_strnew(j +1);
    j = 0;
    if(!tmp)
        return(NULL);
    while (s1[j] != '\0')
    {
        tmp[j] = s1[j];
        j++;
    }
    while (*s2 !='\0')
    {
        tmp[j] = *s2;
        j++;
        s2++;
    }
    return (tmp);
}
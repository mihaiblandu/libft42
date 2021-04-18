/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihai <mihai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 22:56:03 by mihai             #+#    #+#             */
/*   Updated: 2020/11/22 23:00:48 by mihai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char*       ft_strmapi(char *s, char (*f)(unsigned int,char))
{   
    int     len;
    int     i;
    char*   temp;

    i = 0;

    if(!s || !f)
        return (NULL);
    len = ft_strlen(s);
    if(!len)
        return (NULL);
    if (!(temp = ft_strnew(len)))
        return (NULL);
    while (s[i] != '\0')
    {
        temp[i] = f(i,s[i]);
        i++;
    }
    return (temp);
}
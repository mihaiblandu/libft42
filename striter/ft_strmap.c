/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihai <mihai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 22:40:06 by mihai             #+#    #+#             */
/*   Updated: 2020/11/22 22:48:29 by mihai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../libft.h"

char*       ft_strmap(char *s, char (*f)(char))
{   
    int     len;
    int     i;
    char*   temp;

    i = 0;
    if(!s || !f) {
        return (NULL);
    }
    len = ft_strlen(s);
    if((temp = ft_strnew(len))==0)
        return (NULL);
    while (s[i] != '\0')
    {
        temp[i] = f(s[i]);
        i++;
    }
    return (temp);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrml.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihai <mihai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:45:06 by mihai             #+#    #+#             */
/*   Updated: 2020/11/23 15:02:10 by mihai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char*  ft_strtriml(char *s)
{
    int     len;

    s = ft_strrev(s);
    len = ft_strlen(s) -1;
    while (ft_isspace(s[len]))
    {
        s[len] = '\0';
        len--;
    }
    s = ft_strrev(s);
    return (s);
}
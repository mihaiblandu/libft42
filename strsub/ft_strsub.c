/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihai <mihai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 23:44:20 by mihai             #+#    #+#             */
/*   Updated: 2020/11/23 01:17:14 by mihai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char	*str;
    size_t	i;

    i = 0;
    if (!s || !(str = ft_strnew(len)))
        return (NULL);
    while (len--)
        *(str + i++) = *(s + start++);
    *(str + i) = '\0';
    return (str);
}
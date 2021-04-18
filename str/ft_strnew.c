/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihai <mihai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 19:12:29 by mihai             #+#    #+#             */
/*   Updated: 2020/11/05 20:12:01 by mihai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char		*ft_strnew(size_t size)
{
    char	*str;

    if (!(str = (char *)malloc(sizeof(char) * size + 1)))
        return (NULL);
    str[size] = '\0';
    while (size--)
        str[size] = '\0';
    return (str);
}
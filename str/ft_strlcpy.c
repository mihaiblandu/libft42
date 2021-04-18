/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihai <mihai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 02:20:10 by mihai             #+#    #+#             */
/*   Updated: 2020/11/22 02:35:08 by mihai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t i;

    if(!src)
        return (0);
    i = 0;
    if(size)
    {
        size--;
		while (src[i] != '\0' && size)
        {
            dest[i] = src[i];
            size--;
            i++;
        }
        dest[i] = '\0';
    }

    return (ft_strlen(src));
}

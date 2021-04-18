/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihai <mihai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 23:02:34 by mihai             #+#    #+#             */
/*   Updated: 2020/11/21 23:08:42 by mihai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void*   ft_calloc(size_t count, size_t size)
{
    void *s;

    if (!(s = malloc(size * count)))
        return (NULL);
    s = ft_memset(s, 0, count * size);
    return (s);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihai <mihai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 23:37:25 by mihai             #+#    #+#             */
/*   Updated: 2020/11/04 21:47:14 by mihai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void				*ft_memset(void *s, int c, size_t n)
{
    unsigned char	*ptr;

    ptr = (unsigned char*)s;
    while (n-- > 0)
        *(ptr++) = (unsigned char)c;
    return (s);
}

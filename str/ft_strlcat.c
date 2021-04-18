/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihai <mihai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 21:26:25 by mihai             #+#    #+#             */
/*   Updated: 2020/11/21 17:26:45 by mihai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = (ft_strlen(dst) < dstsize) ? ft_strlen(dst) : dstsize;
	len += ft_strlen(src);
	if (dstsize)
	{
		while (*dst)
		{
			dst++;
			i++;
		}
		while (*src && i < (dstsize - 1))
		{
			*dst++ = *src++;
			i++;
		}
		*dst = '\0';
	}
	return (len);
}

/* size_t		ft_strlcat(char * restrict dst, const char * restrict src, size_t maxlen) {
    const size_t srclen = ft_strlen(src);
    const size_t dstlen = ft_strnlen(dst, maxlen);
    if (dstlen == maxlen) return maxlen+srclen;
    if (srclen < maxlen-dstlen) {
        ft_memcpy(dst+dstlen, src, srclen+1);
    } else {
        ft_memcpy(dst+dstlen, src, maxlen-1);
        dst[dstlen+maxlen-1] = '\0';
    }
    return dstlen + srclen;
}
 */
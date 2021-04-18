/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihai <mihai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 16:41:41 by mihai             #+#    #+#             */
/*   Updated: 2020/11/05 16:45:47 by mihai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <x86intrin.h>
#include <inttypes.h>

size_t	ft_strlen(const char *str)
{
    register size_t	len;
    __m128i			zero;
    __m128i			chars;
    int				mask;

    len = 0;
    while ((uintptr_t)str % 16U != 0)
        if (*str++ == 0 || ++len == 0)
            return (len);
    zero = _mm_setzero_si128();
    mask = 0;
    while (1)
    {
        chars = _mm_load_si128((__m128i *)str);
        mask = _mm_movemask_epi8(_mm_cmpeq_epi8(chars, zero));
        if (mask != 0)
        {
            len += __builtin_ctz(mask);
            break ;
        }
        str += sizeof(__m128i);
        len += sizeof(__m128i);
    }
    return (len);
}

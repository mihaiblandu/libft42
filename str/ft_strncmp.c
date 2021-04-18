/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihai <mihai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 21:38:54 by mihai             #+#    #+#             */
/*   Updated: 2020/11/21 22:43:33 by mihai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
int ft_strncmp(const char *s1,const char *s2, size_t n)
{

    if (n < 1)
        return (0);
    n--;
    while (n && *s1 && *s1 == *s2 )
    {
        n--;
        s1++;
        s2++;
    }
    return ((unsigned char)*s1) - ((unsigned char)*s2);
}

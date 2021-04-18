/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihai <mihai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 23:44:20 by mihai             #+#    #+#             */
/*   Updated: 2020/11/23 01:30:38 by mihai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char* ft_substr(char const *s, unsigned int start, size_t len) {
    char *sub_str;
    size_t i;

    i = 0;
    if (s) {
        if( start >= ft_strlen(s))
            return (ft_strnew(1));
        sub_str = ft_strnew(len);
        if (!sub_str)
            return (NULL);
        while (i < len) {
            sub_str[i] = s[i + start];
            i++;
        }
        sub_str[i] = 0;
        return (sub_str);
    }
    return (NULL);
}
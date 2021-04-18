/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihai <mihai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 01:34:03 by mihai             #+#    #+#             */
/*   Updated: 2020/11/22 02:04:15 by mihai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include "../libft.h"

int     slow_atoi(const char *s)
{
    int min;
    int result;
    int i;

    min = 1;
    result = 0;
    i = 0;
    while (ft_isspace(s[i]))
        i++;
    if(s[i] == '-')
        min = -1;
    if (s[i] == '-' || s[i] == '+')
		i++;
    while (ft_isdigit(s[i]))
        result = result * 10 + (s[i++] - '0');
    return (result * min);
}

int ft_atoi( const char * p )
{
    while (*p ==' ' || *p =='\t' || *p =='\v' || *p =='\r' || *p =='\f' || *p =='\n' )
        p++;

    int x = 0;
    bool neg = false;
    if (*p == '-') {
        neg = true;
        ++p;
    }
    while (*p >= '0' && *p <= '9') {
        x = (x*10) + (*p - '0');
        ++p;
    }
    if (neg) {
        x = -x;
    }
    return x;
}
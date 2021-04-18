/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihai <mihai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 23:34:22 by mihai             #+#    #+#             */
/*   Updated: 2020/11/22 23:37:11 by mihai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int ft_strequ(char const *s1, char const *s2)
{
    if(!s1 || !s2)
        return 0;
    return ((ft_strcmp(s1,s2) ? 0 : 1 ));
}
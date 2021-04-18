/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihai <mihai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 16:52:09 by mihai             #+#    #+#             */
/*   Updated: 2020/11/05 20:13:03 by mihai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "../libft.h"

char	*ft_strdup(const char *s)
{
    char	*new;
    
    if(!(new = ft_strnew(ft_strlen(s))))
        return (NULL);
    ft_strcpy(new,s);
    return (new);
}
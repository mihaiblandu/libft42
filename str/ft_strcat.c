/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihai <mihai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 20:43:41 by mihai             #+#    #+#             */
/*   Updated: 2020/11/05 20:45:02 by mihai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "../libft.h"

char    *ft_strcat(char *dest, const char *src)
{
  ft_strcpy (dest + ft_strlen(dest), src);
  return dest;
}
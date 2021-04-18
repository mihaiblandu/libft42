/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihai <mihai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:49:23 by mihai             #+#    #+#             */
/*   Updated: 2020/11/23 14:42:16 by mihai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void rec_fd(int n,int fd)
{
    if(n > 0)
    {
        rec_fd(n/10,fd);
        ft_putchar_fd(n%10+'0',fd);
    }
}
void ft_putnbr_fd(int n,int fd)
{
    if(n < 0) {
        ft_putchar_fd( '-',fd);
        if(n == -2147483648)
        {
            ft_putchar_fd('2',fd);
            rec_fd( 147483648,fd);
        }
        else
            rec_fd( -1*n,fd);
    } else{
        rec_fd(n,fd);
    }
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihai <mihai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:49:42 by mihai             #+#    #+#             */
/*   Updated: 2020/11/23 11:51:09 by mihai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <langinfo.h>
#include <z3.h>
#include "../libft.h"
/*
static ssize_t pwchar(wchar_t c, int fd)
{
    unsigned int i;
    char	t[4] = { 0 };

    i = 0;
    if (c < 0x8000)
    {
        t[0] = (char) ((c >> 6) | 0xc0);
        t[1] = (char) ((c & 0x3f) | 0x80);
        i = 2;
    }
    else if (c < 0x80000)
    {
        t[0] = (char) ((c >> 12) | 0xc0);
        t[1] = (char) (((c >> 6 & 0x3f)) | 0x80);
        t[2] = (char) ((c & 0x3f) | 0x80);
        i = 3;
    }
    else
    {
        t[0] = (char) ((c >> 18) | 0xc0);
        t[1] = (char) (((c >> 12) & 0x3f) | 0x80);
        t[2] = (char) (((c >> 6) & 0x3f) | 0x80);
        t[3] = (char) ((c & 0x3f) | 0x80);
        i = 4;
    }
    return (write(fd, t, i));
}

size_t 	ft_putchar(wchar_t c)
{
    if (c > 0x80)
    {
        return (pwchar(c, STDOUT_FILENO));
    }
    return (write(STDOUT_FILENO, &c, 1));
}
*/

static void	print_unicode(char c)
{
    write(1, &c, 1);
}

void		ft_putchar(int c)
{
    if (c <= 0x7F)
        print_unicode(c);
    else if (c <= 0x7FF)
    {
        print_unicode((c >> 6) + 0xC0);
        print_unicode((c & 0x3F) + 0x80);
    }
    else if (c <= 0xFFFF)
    {
        print_unicode((c >> 12) + 0xE0);
        print_unicode(((c >> 6) & 0x3F) + 0x80);
        print_unicode((c & 0x3F) + 0x80);
    }
    else if (c <= 0x10FFFF)
    {
        print_unicode((c >> 18) + 0xF0);
        print_unicode(((c >> 12) & 0x3F) + 0x80);
        print_unicode(((c >> 6) & 0x3F) + 0x80);
        print_unicode((c & 0x3F) + 0x80);
    }
}
int		ft_putwchar(int unicode)
{
    if (unicode <= 0x7f)
        ft_putchar(unicode);
    else if (unicode <= 0x7ff)
    {
        ft_putchar((unicode >> 6) | 192);
        ft_putchar((unicode & 63) | 128);
        return (2);
    }
    else if (unicode <= 0xffff)
    {
        ft_putchar((unicode >> 12) | 224);
        ft_putchar(((unicode >> 6) & 63) | 128);
        ft_putchar((unicode & 63) | 128);
        return (3);
    }
    else if (unicode <= 0x1fffff)
    {
        ft_putchar((unicode >> 18) | 240);
        ft_putchar(((unicode >> 12) & 63) | 128);
        ft_putchar(((unicode >> 6) & 63) | 128);
        ft_putchar((unicode & 63) | 128);
        return (4);
    }
    return (1);
}
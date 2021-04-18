//
// Created by mihai on 28.11.2020.
//

#include "../libft.h"

int ft_contains(char *str,char c, int len)
{
    int i;

    i = 0;
    while (i <= len)
    {
        if (str[i] == c)
            return i;
        i++;
    }
    return (-1);
}

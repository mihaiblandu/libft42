#include "../libft.h"
char *replace_char(char *s, char c1, char c2)
{
    char    *tem;
    int     i;

    tem = ft_strnew(ft_strlen(s));
    ft_strcpy(tem,s);
    i = 0;
    while (tem[i] != '\0')
    {
        if (tem[i] == c1)
            tem[i] = c2;
        i++;
    }
    return (tem);
}
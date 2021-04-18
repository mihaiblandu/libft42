#include "../libft.h"
/*
 *  Count words divided by spaces - like \t \v \n ...
 * */
size_t  ft_count_words(const char *s)
{
    char    *c;
    int     j;
    size_t  i;

    j = 0;
    c = ft_strnew(ft_strlen(s));
    i = 0;
    ft_strcpy(c, s);
    ft_trim(c);
    while (c[j] != '\0')
    {
        if ((!ft_isspace(c[j]) && ft_isspace(c[j + 1])) \
        || (!ft_isspace(c[j]) && c[j + 1] == '\0'))
            i++;
        j++;
    }
    free(c);
    return (i);
}
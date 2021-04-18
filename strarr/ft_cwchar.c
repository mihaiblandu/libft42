#include "../libft.h"

int  ft_cwchar(char *str, char c)
{
    char        *s;
    int   i;

    s = replace_with_space(str, c);
    i = ft_count_words(s);
    free(s);
    return (i);
}
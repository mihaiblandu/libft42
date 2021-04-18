#include "../libft.h"

char* replace_with_space(char *s, char c)
{
    s = replace_char(s,c,' ');
    ft_trim(s);
    return (s);
}
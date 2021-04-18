#include "../libft.h"

int     ft_str_is_empty(const char *s)
{
    while(*s)
    {
       if (!ft_isspace(*s))
           return (0);
       s++;
    }
    return (1);
}
#include "../libft.h"

char* ft_trim(char *s)
{
    ft_strtriml(s);
    ft_strtrimr(s);

    return (s);
}
#include "../libft.h"

int	ft_str_is_alpha(char *str)
{
    int     i;

    //if(ft_strlen(str) == 0)
    //    return (0);
    i = 0;
    while (str[i])
        if (!ft_isalpha(str[i++]))
            return (0);
    return (1);
}
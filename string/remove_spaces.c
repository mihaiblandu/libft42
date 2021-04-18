#include "../libft.h"
void remove_spaces(char *str)
{
    int     i;
    int     j;
    int     len;
    i = 0;
    j = 0;
    len = ft_strlen(str);
    while (i < len)
    {
        if(str[i] == ' ' && str[i + 1] == ' ')
        {
            j = i;
            while (j < len)
            {
                str[j] = str[j +1];
                j++;
            }
            len--;
        } else{
            i++;
        }
    }
}
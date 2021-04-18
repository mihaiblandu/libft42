
int	ft_str_is_uppercase(char *s)
{
    while (*s)
    {
        if(*s < 'A' || *s > 'Z')
            return (0);
        s++;
    }
    return (1);
}
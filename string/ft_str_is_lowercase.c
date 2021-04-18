
int	ft_str_is_lowercase(char *s)
{
    while (*s)
    {
        if(*s < 'a' || *s > 'z')
            return (0);
        s++;
    }
    return (1);
}
//
// Created by mihai on 27.11.2020.
//

#include "../libft.h"
#include "file.h"


t_file  *ft_fopen(const char *path)
{
    t_file	*stream;
    int i = open(path, O_RDONLY);

    ft_putnbr(i);
    if (!(stream = (t_file *)malloc(sizeof(t_file))))
        return (NULL);
    if ((stream->fd = open(path, O_RDONLY)) == -1)
    {
        free(stream);
        return (NULL);
    }
    ft_bzero(stream->buf, sizeof(char) * (BUFF_SIZE + 1));
    stream->i = 0;
    return (stream);

}
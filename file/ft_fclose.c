//
// Created by mihai on 27.11.2020.
//

#include "../libft.h"
#include "file.h"

int		ft_fclose(t_file **stream)
{
    if(!*stream || !*stream)
        return (0);
    if(close((*stream)->fd) == -1)
        return -1;
    free(*stream);
    *stream = NULL;
    return (0);
}
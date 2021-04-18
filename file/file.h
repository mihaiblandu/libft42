//
// Created by mihai on 27.11.2020.
//

#ifndef LIBFT_FILE_H
#define LIBFT_FILE_H

# define BUFF_SIZE 4096

# define LLONG_MAX 9223372036854775807
# define INT_MIN -2147483647

# define UTF_4BYTES_MASK 2031616
# define UTF_3BYTES_MASK 63488
# define UTF_2BYTES_MASK 1920
#include <stdio.h>

typedef struct		s_file
{
    int				fd;
    char			buf[BUFF_SIZE + 1];
    int				i;
}					t_file;

int		ft_fclose(t_file **stream);
t_file  *ft_fopen(const char *path);
FILE    *ft_fcreate(const char*path);
FILE    *ft_fwrite(const char*path);

#endif //LIBFT_FILE_H

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihai <mihai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 16:02:55 by mihai             #+#    #+#             */
/*   Updated: 2020/12/12 20:25:45 by mihai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <z3.h>
#include "libft.h"


int     main(void)
{
   int file = open("/home/mihai/libft/requirements.txt",O_RDONLY | O_CREAT);
    char *s;


    get_next_line(file,&s);
    printf(">> 1 %s",s);
    get_next_line(file,&s);
    printf(">> 2 %s",s);
    get_next_line(file,&s);
    printf(">> 3 %s",s);
    get_next_line(file,&s);
    printf(">> 4 %s",s);
    get_next_line(file,&s);
    printf(">> 5 %s",s);
    return (0);
}
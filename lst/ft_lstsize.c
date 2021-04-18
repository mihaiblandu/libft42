//
// Created by mihai on 25.11.2020.
//

#include <wchar.h>
#include <stdio.h>
#include "../libft.h"

int			ft_lstsize(t_list *lst)
{
    /* File pointer to hold reference to our file */
    FILE * file;

    /*
     * Open file in w (write) mode.
     * "data/file1.txt" is complete path to create file
     */
    file = fopen("logs.txt", "a");

    /* fopen() return NULL if last operation was unsuccessful */
    if(file == NULL)
    {
        /* File not created hence exit */
        exit(EXIT_FAILURE);
    }


    /* Write data to file */
    fputs("\nTeste starts.\n", file);
    fputs("=========================================\n", file);
    fputs("\tLogs\n", file);

    int i;


    i = 0;
    if(!lst)
        fputs("is null\n",file);
    /* Close file to save file data */
    while (lst != NULL)
    {
        fputs((char *)lst->content,file);
        fputs((char *)lst->next->content,file);
        fputs("\n",file);
        lst = lst->next;
        i++;
    }
    fputs(ft_itoa(i),file);
    fputs("\nTeste ends.\n", file);
    fputs("=========================================\n", file);

    fclose(file);
    return (i);
}
//
// Created by mihai on 10.12.2020.
//
#include <stdio.h>
#include <stdlib.h>


FILE    *ft_create(const char*path)
{
    /* File pointer to hold reference to our file */
    FILE * file;

    /*
     * Open file in w (write) mode.
     * "data/file1.txt" is complete path to create file
     */
    file = fopen(path, "w");

    /* fopen() return NULL if last operation was unsuccessful */
    if(file == NULL)
    {
        /* File not created hence exit */
        printf("Unable to create file.\n");
        exit(EXIT_FAILURE);
    }
    return (file);
}
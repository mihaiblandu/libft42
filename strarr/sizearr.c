//
// Created by mihai on 28.11.2020.
//

int arrsize(void **arr)
{
    int i;

    i = 0;
    while (*arr++)
        i++;
    return (i);
}
//
// Created by mihai on 03.12.2020.
//
#include <z3.h>
#include "unistd.h"
#include "../libft.h"
int fibonacci(int n){
    if(n < 0)
        return (-1);
    if(n == 0)
    {
        printf("0"); return (0);
    }
    if(n == 1)
    {
        printf("0, 1."); return (0);
    }
    if(n == 2)
    {
        printf("0, 1, 1."); return (0);
    }
    n-=0;
    int a = 1;
    int b = 1;
    int s = 1;
    printf("0, 1, 1, ");
    while (n > 0){
        s = a + b;
        a = b;
        b = s;
        n--;
        if( n != 0)
            printf("%i, ",s);
        else
            printf("%i.", s);
    }
    return (0);
}
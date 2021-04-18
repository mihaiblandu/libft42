//
// Created by mihai on 11.12.2020.
//

#include <limits.h>
#include "../libft.h"

void ft_print_bits(unsigned int b)
{
    unsigned int c = ((unsigned )2) << 30;

    for (int i = 0; i < 32; i++) {
        if(c <= b)
            ft_putchar('1');
        else
            ft_putchar('0');
        if((i + 1) % 8 == 0)
            ft_putchar(' ');
        b = (b << 1);
    }
}
void    print_bits(unsigned char octet)
{
    int oct;
    int div;

    div = 128;
    oct = octet;
    while (!(div <= 1))
    {
        if (div <= oct)
        {
            write(1, "1", 1);
            oct = oct % div;
        }
        else
        {
            write(1, "0", 1);
            div = div / 2;
        }
    }
}
void writebits (const unsigned long v, int fd)
{
    if (!v)  { ft_putchar ('0'); return; };

    size_t sz = sizeof v * CHAR_BIT;
    unsigned long rem = 0;

    while (sz--)
        if ((rem = v >> sz))
            write (fd, (rem & 1) ? "1" : "0", 1);
}
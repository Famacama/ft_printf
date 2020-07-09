#include "printf.h"

void    ft_DecToHexa_moins(size_t n)
{
    if (n > 15)
    {
        ft_DecToHexa(n / 16);
        n %= 16;
    }
   if (n > 9)
        ft_putchar_fd(n + 55, 0);
    else
        ft_putchar_fd(n + 48, 0);
}

void printf_xX(va_list *my_list)
{
    int n;

    n = va_arg(*my_list, int);
    ft_DecToHexa(n);
}
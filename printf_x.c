#include "printf.h"

void            ft_DecToHexa(size_t n)
{
    if (n > 15)
    {
        ft_DecToHexa(n / 16);
        n %= 16;
    }
   if (n > 9)
        ft_putchar_fd(n + 87, 0);
    else
        ft_putchar_fd(n + 48, 0);
}

void printf_x(va_list *my_list)
{
    size_t n;

    n = va_arg(*my_list, size_t);
    ft_DecToHexa(n);
}

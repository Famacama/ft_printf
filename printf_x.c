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
    //size_t n;

    //n = va_arg(*my_list, size_t);
    if (pas == 0)
	{
        p = va_arg(*my_list, int);
        l_value = find_value_d(p);
        pas = 1;
    }
    else
    {
        ft_DecToHexa(p);
        pas = 0;
    }

}

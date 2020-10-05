#include "printf.h"

void            ft_DecToHexa_u(unsigned int n)
{
    if (n > 15)
    {
        ft_DecToHexa_u(n / 16);
        n %= 16;
    }
   if (n > 9)
        ft_putchar_fd(n + 87, 0);
    else
        ft_putchar_fd(n + 48, 0);
}

void    find_length_hexa_x(unsigned int n)
{
    if (n > 15)
    {
        find_length_hexa(n / 16);
        n %= 16;
    }
   if (n > 9)
        length_value++;
    else
        length_value++;
}

void check_for_printf_x(int x)
{
    if (((cad).flag_precision > (length_value)))
	{
		(cad).flag_zero = -1;
        zero_for_precision = 1;
		if ((cad).flag_width <= (((cad).flag_precision)))
			(cad).flag_minus = -1;
		(cad).flag_width -= (((cad).flag_precision));
        (cad).flag_precision -= length_value;
	}
	else
	{
        if ((cad).flag_precision <= (length_value) && ((cad).flag_precision != -1))
        {
			if (x == 0 &&(cad).flag_precision == 0)
			{
				if ((cad).flag_width)
					(cad).flag_width++;
				do_not_print = 1;
			}
			if ((cad).flag_precision < (length_value))
				(cad).flag_zero = -1;
			(cad).flag_precision -= (length_value);
		}
		(cad).flag_width -= length_value;
	}
}

void write_when_not_minus_x(int x)
{
    if ((cad).flag_zero == -1)
	{
        while((cad).flag_width-- > 0)
            (cad).flag_zero == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0);
        while((cad).flag_precision-- > 0)
            zero_for_precision == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0);
		if (!do_not_print)
			ft_DecToHexa_u((size_t)x);
    }
    else
    {
		if (x < 0 && (cad).flag_zero != 1)
            ft_putchar_fd('-', 0);
        while((cad).flag_width-- > 0)
            (cad).flag_zero == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0);
        while((cad).flag_precision-- > 0)
            zero_for_precision == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0); 
		if (!do_not_print)
			ft_DecToHexa_u((size_t)x);
    }
}

void    printf_x(va_list *my_list)
{
    int x;
	do_not_print = 0;
    zero_for_precision = 0;
    x = va_arg(*my_list, int);
    find_length_hexa_x(x);
    
    check_for_printf_x(x);
    if ((cad).flag_minus == -1)
        write_when_not_minus_x(x);
    else
	{
		while((cad).flag_precision-- > 0)
            zero_for_precision == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0); 
		if (!do_not_print)
				ft_DecToHexa_u(x);
		while ((cad).flag_width-- > 0)
			ft_putchar_fd(' ', 0);
	}    
}
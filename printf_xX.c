#include "printf.h"

void    ft_DecToHexa_moins(unsigned int n)
{
    if (n > 15)
    {
        ft_DecToHexa_moins(n / 16);
        n %= 16;
    }
   if (n > 9)
        ft_putchar_fd(n + 55, 0);
    else
        ft_putchar_fd(n + 48, 0);
}

void check_for_printf_X(int X)
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
			if (X == 0 &&(cad).flag_precision == 0)
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

void write_when_not_minus_X(int X)
{
    if ((cad).flag_zero == -1)
	{
        while((cad).flag_width-- > 0)
            (cad).flag_zero == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0);
        while((cad).flag_precision-- > 0)
            zero_for_precision == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0);
		if (!do_not_print)
			ft_DecToHexa_moins((size_t)X);		
        }
        else
        {
		    if (X < 0 && (cad).flag_zero != 1)
                ft_putchar_fd('-', 0);
            while((cad).flag_width-- > 0)
                (cad).flag_zero == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0);
            while((cad).flag_precision-- > 0)
                zero_for_precision == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0); 
			if (!do_not_print)
				ft_DecToHexa_moins((size_t)X);
        }
}

void    printf_xX(va_list *my_list)
{
    int X;

	do_not_print = 0;
    zero_for_precision = 0;
    X = va_arg(*my_list, int);
    find_length_hexa_x(X);

    check_for_printf_X(X);
    if ((cad).flag_minus == -1)
        write_when_not_minus_X(X);
    else
	{
		while((cad).flag_precision-- > 0)
            zero_for_precision == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0); 
		if (!do_not_print)
				ft_DecToHexa_moins((size_t)X);
		while ((cad).flag_width-- > 0)
			ft_putchar_fd(' ', 0);
	}    
}
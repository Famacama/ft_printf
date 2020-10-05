#include "printf.h"

int find_value_u(unsigned int number)
{
    l_value = 0;
    if (number <= 0)
    {
        number *= -1;
        l_value = 1;
    }
    while (number > 0)
    {
        number /= 10;
        l_value++;
    }
    return (l_value);
}

void	ft_putnbr_uu_fd(unsigned int n, int fd)
{
	unsigned int nbr;

	if (n < 0)
	{
		nbr = -n;
		ft_putchar_fd('-', 0);
	}
	else
		nbr = n;
	if (nbr > 9)
	{
		ft_putnbr_uu_fd(nbr / 10, fd);
		ft_putnbr_uu_fd(nbr % 10, fd);
	}
	if (nbr < 10)
	{
		ft_putchar_fd(nbr + 48, fd);
	}
}

void check_for_printf_u(int u)
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
			if (u == 0 &&(cad).flag_precision == 0)
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

void write_when_not_minus_u(int u)
{
    if ((cad).flag_zero == -1)
		{
            while((cad).flag_width-- > 0)
                (cad).flag_zero == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0);
            while((cad).flag_precision-- > 0)
                zero_for_precision == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0);
			if (!do_not_print)
				ft_putnbr_uu_fd(u, 0);		
        }
        else
        {
            while((cad).flag_width-- > 0)
                (cad).flag_zero == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0);
            while((cad).flag_precision-- > 0)
                zero_for_precision == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0); 
			if (!do_not_print)
				ft_putnbr_uu_fd(u, 0);
        }
}

void    printf_u(va_list *my_list)
{
    int u;

	do_not_print = 0;
    zero_for_precision = 0;
    u = va_arg(*my_list, int);
    length_value = find_value_u(u);
    
    check_for_printf_u(u);
    if ((cad).flag_minus == -1)
        write_when_not_minus_u(u);
    else
	{
		while((cad).flag_precision-- > 0)
            zero_for_precision == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0); 
		if (!do_not_print)
				ft_putnbr_uu_fd(u, 0);
		while ((cad).flag_width-- > 0)
			ft_putchar_fd(' ', 0);
	}    
}
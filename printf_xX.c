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
    size_t X;
    length_value = 0;

    X = va_arg(*my_list, size_t);
    find_length_hexa(X);
    //length_value;

    if (((cad).flag_precision > (length_value)))
	{
		(cad).flag_zero = 1;
		(cad).flag_minus = -1;
		(cad).flag_width = (((cad).flag_precision));
		(cad).flag_width -= length_value;
	}
	else
	{
        if ((cad).flag_precision < (length_value) && ((cad).flag_precision != -1))
            (cad).flag_zero = -1;
		(cad).flag_width -= length_value;
	}
    if ((cad).flag_minus == -1)
    {
        if ((cad).flag_zero == -1)
		{
            while((cad).flag_width-- > 0)
                (cad).flag_zero == 1 ? write(1, "0", 1) : write(1, "*", 1);
        }
        else
        {
            while((cad).flag_width-- > 0)
                (cad).flag_zero == 1 ? write(1, "0", 1) : write(1, "*", 1); 
        }
        ft_DecToHexa_moins((size_t)X);
    }
    else
	{
		ft_DecToHexa_moins((size_t)X);
		while ((cad).flag_width-- > 0)
			write(1, "*", 1);
	}
}


//void printf_xX(va_list *my_list)
/*void printf_xX(void)
{
    return;
    //int n;

    //n = va_arg(*my_list, int);
    if(pas == 0)
    {
        d = va_arg(*my_list, int);
        l_value = (find_value_d(d));
        pas = 1;
    }
    else
    {
        ft_DecToHexa(d);
        pas = 0;
    }
}*/
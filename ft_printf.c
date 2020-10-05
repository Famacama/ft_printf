#include "printf.h"

void (*TabFunction[10]) (va_list *) = {printf_c, printf_s, printf_p,
 printf_d, printf_i, printf_u, printf_x, printf_xX};

int y = 0;
va_list my_list;

int ft_printf_atoi(const char *str)
{
    int n;

    n = 0;
    while ((str[y] >= '0' && str[y] <= '9') && str[y])
	{
		n *= 10;
		n += str[y] - 48;
		y++;
	}
    y--;
    return(n);
}

int find_conversion(const char *str)
{
    int i;
    char TabIndex[10] = {'c', 's', 'p', 'd', 'i', 'u', 'x', 'X', '%', 0};

	i = 0;
	while ((str[y] != TabIndex[i]) && TabIndex[i] && str[y])
        i++;
    (i == 9) ? ((cad).conversion = -1) : ((cad).conversion = i);
    if ((cad).conversion > 9 || ((cad).conversion < 0))
        return (-1);
    else
    {
        y++;
        return ((cad).conversion);
    }
}

void calculate_widht(const char *str, va_list *my_list)
{
    if (str[y] == '*')
    {
        (cad).flag_width = va_arg(*my_list, int);
        if ((cad).flag_width < 0)
        {
            (cad).flag_width *= -1;
            (cad).flag_minus = 1;
        }
	}
    else
        (cad).flag_width = ft_printf_atoi(str);
}

void calculate_presision(const char *str, va_list *my_list)
{
	y++;
    if ((str[y] >= '0') && (str[y] <= '9'))
        (cad).flag_precision = ft_printf_atoi(str);
    else if (str[y] == '*')
    {
        (cad).flag_precision = va_arg(*my_list, int);
        if ((cad).flag_precision < 0)
            (cad).flag_precision = -1;
    }
    else
        (cad).flag_precision = 0;
}

void find_all_flags_and_conversion(const char *str, va_list *my_list)
{
    while (str[y] && str && str[y + 1])
    {
        y++;
        if (str[y] == '-' && str[y])
            (cad).flag_minus = 1;
        else if ((str[y] == '0') && (str[y]) && ((cad).flag_zero != 1))
            (cad).flag_zero = 1;
        else if (((str[y] >= '0') && (str[y] <= '9')) || (str[y] == '*'))
			calculate_widht(str, my_list);
        else if (str[y] == '.')
            calculate_presision(str, my_list);
        if (find_conversion(str) != -1)
            return;
    }
}

void init_struct_to_begin_value(void)
{
    cad.conversion = -1;
    cad.flag_minus = -1;
    cad.flag_precision = -1;
    cad.flag_width = -1;
    cad.flag_zero = -1;
    length_value = 0;
}

int ft_printf(const char *str, ...)
{
    y = 0;
    r = 0;
    va_start(my_list, str);
    while(str[y] && str)
    {
        if (str[y] == '%')
        {
            init_struct_to_begin_value();
            find_all_flags_and_conversion(str, &my_list);
            if (((cad).conversion < 8) && ((cad).conversion > -1))
                (*TabFunction[(cad).conversion]) (&my_list);
            else if ((cad).conversion == 8)
                printf_100();
            else
                y++;
        }
        else
        {
            ft_putchar_fd(str[y], 0);
            y++;
        }
    }
    return (r);
}
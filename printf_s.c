#include "printf.h"

void write_printf_s(void)
{
    int i;

    i = 0;
    if ((cad).flag_minus == -1)
	{
		while((cad).flag_width-- > 0)
            (cad).flag_zero == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0);
        if (s == NULL)
            while (g_string_null && g_string_null[i] && length_value--)
                ft_putchar_fd(g_string_null[i++], 0);
        else
            while (s && s[i] && length_value--)
		        ft_putchar_fd(s[i++], 0);
	}
	else
	{
		if (s == NULL)
            while (g_string_null && g_string_null[i] && length_value--)
                ft_putchar_fd(g_string_null[i++], 0);
        else
            while (s && s[i] && length_value--)
		        ft_putchar_fd(s[i++], 0);
        while((cad).flag_width-- > 0)
			ft_putchar_fd(' ', 0);
    }
}

void printf_s(va_list *my_list)
{
    int i;

    s = va_arg(*my_list, char *);
    length_value = ft_strlen(s);
    i = 0;
    g_string_null = "(null)";

    if (s == NULL)
        length_value = 6;
    if (((cad).flag_precision < length_value))
    {
        if ((cad).flag_precision != -1)
            (cad).flag_width += (length_value - (cad).flag_precision);
        (cad).flag_width -= length_value;
        length_value = (cad).flag_precision;
    }
    else
        (cad).flag_width -= length_value;
    write_printf_s();
}
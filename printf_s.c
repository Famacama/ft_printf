//copie x char
#include "printf.h"




void printf_s(va_list *my_list)
{
    char *s;
    int i;
    //int length_value;

    s = va_arg(*my_list, char *);
    length_value = ft_strlen(s);
    i = 0;

    if (((cad).flag_precision < length_value))
    {
        if ((cad).flag_precision != -1)
            (cad).flag_width += (length_value - (cad).flag_precision);
        (cad).flag_width -= length_value;
        length_value = (cad).flag_precision;
    }
    else
        (cad).flag_width -= length_value;
    if ((cad).flag_minus == -1)
	{
		while((cad).flag_width-- > 0)
			(cad).flag_zero == 1 ? write(1, "0", 1) : write(1, " ", 1);
		if (s == NULL)
            write(1, "(null)", 6);
        else
            while (s && s[i] && length_value--)
		        ft_putchar_fd(s[i++], 0);
	}
	else
	{
		if (s == NULL)
            write(1, "(null)", 6);
        else
            while (s && s[i] && length_value--)
		        ft_putchar_fd(s[i++], 0);
        while((cad).flag_width-- > 0)
			(cad).flag_zero == 1 ? write(1, "0", 1) : write(1, " ", 1);
    }
}







/*
void    printf_s(va_list *my_list)
{
    int i;

    i = 0;
	if (pas == 0)
    {
        char *s;
	    s = va_arg(*my_list, char *);
//printf("%s==========================\n", s);
        if (s == NULL)
        {
            pas = -1;
            return;
        }
        l_value = ft_strlen(s);
        if (precision < l_value && precision != 0)
            l_value = precision;
        pas = 1;
    }
    else
    {
        if (s == NULL)
            write(1, "(null)", 6);
        else
            while (s && s[i] && l_value--)
		        ft_putchar_fd(s[i++], 0);
        pas = 0;
    }
}*/
/*
if (pas == 0)
	{
        d = va_arg(*my_list, int);
        l_value = find_value_d(d);
        pas = 1;
    }
    else
	    ft_putnbr_fd(d, 0);

int main(int argc, char **argv)
{
    if (argc != 2)
        return 0;
    //printf("%s\n",argv[1]);
    printf_s(argv[1]);
    return 0;
}*/
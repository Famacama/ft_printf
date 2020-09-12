//copie x char
#include "printf.h"

void    printf_s(va_list *my_list)
{
    int i;

    i = 0;
	if (pas == 0)
    {
        s = NULL;
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
}
/*
if (pas == 0)
	{
        d = va_arg(*my_list, int);
        l_value = find_value_d(d);
        pas = 1;
    }
    else
	    ft_putnbr_fd(d, 0);*/
/*
int main(int argc, char **argv)
{
    if (argc != 2)
        return 0;
    //printf("%s\n",argv[1]);
    printf_s(argv[1]);
    return 0;
}*/
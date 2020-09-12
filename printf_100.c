#include "printf.h"

void printf_100(va_list *my_list)
{
    if (pas == 0)
    {
		l_value = 1;
		pas = 1;
	}
    else
    {
        write(1, "%", 1);
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
int main(void)
{
    printf_100();
}*/
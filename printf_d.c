//take the next argument and print is an int
#include "printf.h"

/*void    printf_d(va_list *my_list)
{
	int d;
    
	d = va_arg(*my_list, int);
	ft_putnbr_fd(d, 0);
}

int main(void)
{
    int c = 0x2550;
    int d = &c;
    printf_d(d);
    printf("\nd = %d", d);
}*/


void    printf_d(va_list *my_list)
{
    int d;
    //int length_value;

    d = va_arg(*my_list, int);
    length_value = find_value_d(d);
    
	(cad).flag_width -= length_value;
    (cad).flag_precision -= length_value;
    if((cad).flag_precision != -1)
    {
        (cad).flag_width -= (cad).flag_precision;
        (cad).flag_zero = -1;
    }
	/*(cad).flag_precision -= length_value;
	if((cad).flag_precision > 0)
		(cad).flag_width  -= (cad).flag_precision;*/


    if ((cad).flag_minus == -1)
    {
        //printf("a\n");
        while((cad).flag_width-- > 0)
            write(1, "*", 1);
        while ((cad).flag_precision-- > 0)
            write(1, "0", 1);
        ft_putnbr_fd(d, 0);
    }
    else
	{
        //printf("b\n");
        while ((cad).flag_precision-- > 0)
            write(1, "0", 1);
		ft_putnbr_fd(d, 0);
		while ((cad).flag_width-- > 0)
			write(1, "*", 1);
	}
}


























/*
    //(cad).flag_width -= length_value;
    printf("length_value %d\n", length_value);
    if (((cad).flag_precision > (length_value)))
	{
        printf("a\n");
		(cad).flag_zero = 1;
		(cad).flag_minus = -1;
		//(cad).flag_width = (((cad).flag_precision));
		(cad).flag_width -= length_value;
	}
	else
	{
        printf("b\n");
        if ((cad).flag_precision < (length_value) && ((cad).flag_precision != -1))
            (cad).flag_zero = -1;
		(cad).flag_width -= length_value;
	}
    if ((cad).flag_minus == -1)
    {
        printf("c\n");
        while((cad).flag_width-- > 0)
			(cad).flag_zero == 1 ? write(1, "0", 1) : write(1, "*", 1);
        ft_putnbr_fd(d, 0);
    }
    else
	{
        printf("d\n");
		ft_putnbr_fd(d, 0);
		while ((cad).flag_width-- > 0)
			write(1, "*", 1);
	}*/
//}










/*
void    printf_d(va_list *my_list)
{
	int d;
    if (pas == 0)
	{
        d = 0;
        d = va_arg(*my_list, int);
        l_value = find_value_d(d);
        pas = 1;
    }
    else
	{
        ft_putnbr_fd(d, 0);
        pas = 0;
    }
}*/
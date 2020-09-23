//don't work whit scanf only printf
#include "printf.h"
/*
void    printf_i(va_list *my_list)
{
    //int c;

    //d = va_arg(*my_list, int);
    if(pas == 0)
    {
        d = va_arg(*my_list, int);
        l_value = (find_value_d(d));
        pas = 1;
    }
    else
    {
        ft_putnbr_fd(d, 0);
        pas = 0;
    }
}
*/




void    printf_i(va_list *my_list)
{
    int i;
    //int length_value;

    i = va_arg(*my_list, int);
    length_value = find_value_d(i);
    /*printf("length_value %d\n", length_value);
    printf("(cad).flag_width %d\n", (cad).flag_width);
    printf("(cad).flag_precision %d\n", (cad).flag_precision);*/

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
        ft_putnbr_fd(i, 0);
    }
    else
	{
        //printf("b\n");
        while ((cad).flag_precision-- > 0)
            write(1, "0", 1);
		ft_putnbr_fd(i, 0);
		while ((cad).flag_width-- > 0)
			write(1, "*", 1);
	}
}










/*
int main(void)
{
    int c = 0x2550;
    int d = &c;
    printf_d(d);
    printf("\nd = %d", d);
}*/
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
	//int d;
    if (pas == 0)
	{
        d = 0;
        d = va_arg(*my_list, int);
        l_value = find_value_d(d);
        pas = 1;
    }
    else
	    ft_putnbr_fd(d, 0);
}
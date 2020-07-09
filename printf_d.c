//take the next argument and print is an int
#include "printf.h"

void    printf_d(va_list *my_list)
{
	int d;
    
	d = va_arg(*my_list, int);
	ft_putnbr_fd(d, 0);
}
/*
int main(void)
{
    int c = 0x2550;
    int d = &c;
    printf_d(d);
    printf("\nd = %d", d);
}*/
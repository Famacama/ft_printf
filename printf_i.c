//don't work whit scanf only printf
#include "printf.h"

void    printf_i(va_list *my_list)
{
    int c;

    c = va_arg(*my_list, int);
    ft_putnbr_fd(c, 0);
}
/*
int main(void)
{
    int c = 0x2550;
    int d = &c;
    printf_d(d);
    printf("\nd = %d", d);
}*/
//don't work whit scanf only printf
#include "printf.h"

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
/*
int main(void)
{
    int c = 0x2550;
    int d = &c;
    printf_d(d);
    printf("\nd = %d", d);
}*/
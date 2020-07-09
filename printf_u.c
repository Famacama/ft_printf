#include "printf.h"

void	ft_putnbr_u_fd(unsigned int n)
{
	if (n > 9)
	{
		ft_putnbr_u_fd(n / 10);
        ft_putnbr_u_fd(n % 10);
	}
	else
		ft_putchar_fd(n + 48, 0);
}

void    printf_u(va_list *my_list)
{
    unsigned int c;

    c = va_arg(*my_list, unsigned int);
    ft_putnbr_u_fd(c);
}
/*
int main(void)
{
    unsigned int c = -2444668;
    //int d = &c;
    printf_u(c);
    printf("\nu = %u", c);
}*/
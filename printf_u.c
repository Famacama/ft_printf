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
    //unsigned int c;

    //c = va_arg(*my_list, unsigned int);
    if (pas == 0)
	{
        u = va_arg(*my_list, int);
        l_value = 1;
        pas = 1;
    }
    else
    {
        ft_putnbr_u_fd(u);
        pas = 0;
    }
}
/*
int main(void)
{
    unsigned int c = -2444668;
    //int d = &c;
    printf_u(c);
    printf("\nu = %u", c);
}*/
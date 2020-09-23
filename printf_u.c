#include "printf.h"
/*
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
        int u;
        u = va_arg(*my_list, unsigned int);
        l_value = 1;
        pas = 1;
    }
    else
    {
        ft_putnbr_u_fd(u);
        pas = 0;
    }
}
*/
int find_value_u(unsigned int d)
{
    unsigned int number;
    number = d;
    while (number > 0)
    {
        number /= 10;
        l_value++;
    }
    return (l_value);
}

void	ft_putnbr_uu_fd(unsigned int n, int fd)
{
	unsigned int nbr;

	if (n < 0)
	{
		nbr = -n;
		write(fd, "-", 1);
	}
	else
		nbr = n;
	if (nbr > 9)
	{
		ft_putnbr_uu_fd(nbr / 10, fd);
		ft_putnbr_uu_fd(nbr % 10, fd);
	}
	if (nbr < 10)
	{
		ft_putchar_fd(nbr + 48, fd);
	}
}


void    printf_u(va_list *my_list)
{
    unsigned long u;

    u = va_arg(*my_list, int);
    length_value = find_value_u(u);
    
	(cad).flag_width -= length_value;
    (cad).flag_precision -= length_value;
    if((cad).flag_precision != -1)
    {
        (cad).flag_width -= (cad).flag_precision;
        (cad).flag_zero = -1;
    }
	//(cad).flag_precision -= length_value;
	//if((cad).flag_precision > 0)
	//	(cad).flag_width  -= (cad).flag_precision;


    if ((cad).flag_minus == -1)
    {
        while((cad).flag_width-- > 0)
            write(1, "*", 1);
        while ((cad).flag_precision-- > 0)
            write(1, "0", 1);
        ft_putnbr_uu_fd(u, 0);
    }
    else
	{
        while ((cad).flag_precision-- > 0)
            write(1, "0", 1);
		ft_putnbr_uu_fd(u, 0);
		while ((cad).flag_width-- > 0)
			write(1, "*", 1);
	}
    return;
}












/*
int main(void)
{
    unsigned int c = -2444668;
    //int d = &c;
    printf_u(c);
    printf("\nu = %u", c);
}*/
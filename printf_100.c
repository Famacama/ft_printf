#include "printf.h"

void printf_100(void)
{
    char cent;

	cent = '%';
	length_value = 1;

	(cad).flag_width -= length_value;
	if ((cad).flag_minus == -1)
	{
		while((cad).flag_width-- > 0)
			(cad).flag_zero == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0);
		ft_putchar_fd('%', 0);
	}
	else
	{
		ft_putchar_fd('%', 0);
		while ((cad).flag_width-- > 0)
			ft_putchar_fd(' ', 0);
	}
}
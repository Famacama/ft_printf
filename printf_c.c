//convert int to single char
#include "printf.h"
#include <stdio.h>

/*void	printf_c(va_list *my_list)
{
	//char c;
		printf("zzz\n");
		d = va_arg(*my_list, int);
		l_value = 1;
		pas = 1;
		write(1, &d, 1);


	if (pas == 0)
	{
        d = va_arg(*my_list, int);
        l_value = 1;
        pas = 1;
    }
    else
	{
		write(1, &d, 1);
		pas = 0;
	}
}

s

int main(void)
{
	printf("reel printf = %c\n", 'A');
	printf_c('A');
	return (0);
}*/
//void (*TabFunction[9]) (va_list *) = {printf_c};

void printf_c(va_list *my_list)
{
	
	char c;
	int length_value;

	c = va_arg(*my_list, int);
	length_value = 1;

	(cad).flag_width -= length_value;
	if ((cad).flag_minus == -1)
	{
		while((cad).flag_width-- > 0)
			(cad).flag_zero == 1 ? write(1, "0", 1) : write(1, "*", 1);
		write(1, &c, 1);
	}
	else
	{
		write(1, &c, 1);
		while ((cad).flag_width-- > 0)
			write(1, "*", 1);
	}
}
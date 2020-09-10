//convert int to single char
#include "printf.h"
#include <stdio.h>

void	printf_c(va_list *my_list)
{
	//char c;
	/*	printf("zzz\n");
		d = va_arg(*my_list, int);
		l_value = 1;
		pas = 1;
		write(1, &d, 1);
*/

	if (pas == 0)
	{
        d = va_arg(*my_list, int);
        l_value = 1;
        pas = 1;
    }
    else
	    write(1, &d, 1);
}

/*s

int main(void)
{
	printf("reel printf = %c\n", 'A');
	printf_c('A');
	return (0);
}*/
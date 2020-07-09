//convert int to single char
#include "printf.h"
#include <stdio.h>

void	printf_c(va_list *my_list)
{
	char c;

	c = va_arg(*my_list, int);
	write(1, &c, 1);
}
/*

int main(void)
{
	printf("reel printf = %c\n", 'A');
	printf_c('A');
	return (0);
}*/
#include <stdio.h>
#include "printf.h"

int main (void)
{
    int i = 0;
    int j = 0;
    //ft_printf("%1.5d\n", 100);
    //printf("%1.5d\n", 100);


    j +=  	printf("|%s|\n", "Salut");
	i += ft_printf("|%s|\n", "Salut");
    printf("j == %d\n i == %d\n", j, i);

    return (0);
}
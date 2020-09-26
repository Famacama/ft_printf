#include <stdio.h>
#include "printf.h"
/*
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
*/


#include <stdio.h>
#include "printf.h"
#include <limits.h>
#include <float.h>
#include <math.h>

void display_return(int i, int j, char *str)
{
	if (i == j)
	{
		printf("\033[1;32m");
		printf("--------------------");
		printf("\n%s TEST SUCCEED\n", str);
		printf("--------------------\n");
		printf("\033[0m");
	}
   else
   {
	   printf("\033[1;31m");
	   printf("--------------------");
	   printf("\n%s TEST FAILED\n", str);
	   printf("--------------------\n");
	   printf("\033[0m");
   }
}

int	main()
{
	/*int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int f = 0;
	int g = 0;
	int h = 0;*/
	int i = 0;
	int j = 0;
/*	int k = 0;
	int l = 0;
	int m = 0;
	int n = 0;
	int o = 0;
	int p = 0;
	int q = 0;
	int r = 0;
	int s = 0;
	int t = 0;
	int u = 0;
	int v = 0;
	int w = 0;
	int x = 0;
	int y = 0;
	int z = 0;
	long long test_conv = LONG_MAX;
	long long test_conv_neg = LONG_MIN;
	unsigned long test_conv_u = ULONG_MAX;*/




	printf("--------------------\n");
	printf("STRING\n");
	printf("--------------------\n");
	printf("\n");

	j +=  	printf("|%s|\n", "Salut");
	i += ft_printf("|%s|\n", "Salut");
    printf("j == %d\n i == %d\n", j, i);


	j +=  	printf("|%.2s|\n", "Salut");
	i += ft_printf("|%.2s|\n", "Salut");
    printf("j == %d\n i == %d\n", j, i);


	j +=  printf("|%-45.s|\n", "Salut");
	i +=  ft_printf("|%-45.s|\n", "Salut");
    printf("j == %d\n i == %d\n", j, i);


	j +=  	printf("|%45.10s|\n", "Salut");
	i +=  ft_printf("|%45.10s|\n", "Salut");
    printf("j == %d\n i == %d\n", j, i);


	j +=  	printf("|%-2s|\n", "Hola hola");
	i +=  ft_printf("|%-2s|\n", "Hola hola");
    printf("j == %d\n i == %d\n", j, i);


	/*
	** 	j +=  	printf("|%s|\n", NULL);
	** 	 i +=  ft_printf("|%s|\n", NULL);
	*/

	j +=  	printf("|%.145s|\n", "La vie est belle");
	i +=  ft_printf("|%.145s|\n", "La vie est belle");
    printf("j == %d\n i == %d\n", j, i);


	j +=  	printf("|%45.10s|\n", "Salut");
	i +=   ft_printf("|%45.10s|\n", "Salut");
    printf("j == %d\n i == %d\n", j, i);

	/*printf("--------------------\n");
	printf("STRING TEST\n");
	printf("--------------------\n");
	printf("\n");
	i += (printf("Coucou = %s %.5s %.6s %.7s %.s %.0s %.s %.2s |%5s %4s %6s %7s %8s, coucou\n", "Coucou", "Coucou", "Coucou", "Coucou", "Coucou","Coucou","Coucou","Coucou","Coucou","Coucou","Coucou","Coucou","Coucou"));
	j += (ft_printf("Coucou = %s %.5s %.6s %.7s %.s %.0s %.s %.2s |%5s %4s %6s %7s %8s, coucou\n", "Coucou", "Coucou", "Coucou", "Coucou", "Coucou","Coucou","Coucou","Coucou","Coucou","Coucou","Coucou","Coucou","Coucou"));
	printf("\n");
	i += (ft_printf("Salut = %.3s coucou %.3s haha\n", "bite", "chien"));
	j +=    (printf("Salut = %.3s coucou %.3s haha\n", "bite", "chien"));
	printf("\n");
	i += (ft_printf("Coucou = %5.5s %5.6s %5.7s %6.6s %6.5s %7.s %1.s %5.15s %30.s, coucou\n", "Coucou","Coucou","Coucou","Coucou","Coucou","Coucou","Coucou","Coucou","Coucou"));
	j +=    (printf("Coucou = %5.5s %5.6s %5.7s %6.6s %6.5s %7.s %1.s %5.15s %30.s, coucou\n", "Coucou","Coucou","Coucou","Coucou","Coucou","Coucou","Coucou","Coucou","Coucou"));
	printf("\n");
	i += (ft_printf("Coucou = %*.*s, coucou\n", 20, 0, "Coucou"));
	j +=    (printf("Coucou = %*.*s, coucou\n", 20, 0, "Coucou"));
	printf("\n");
	i += (ft_printf("Coucou =  coucou\n"));
	j +=    (printf("Coucou =  coucou\n"));
	printf("\n");
	i += (ft_printf("Coucou = %% coucou\n"));
	j +=    (printf("Coucou = %% coucou\n"));
	display_return(i, j, "STRING");*/
    
    return(0);
}
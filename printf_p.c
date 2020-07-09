//convert void * to hexa
#include "printf.h"

void    ft_DecToHexa_plus(size_t n)
{
    if (n > 15)
    {
        ft_DecToHexa_plus(n / 16);
        n %= 16;
    }
   if (n > 9)
        ft_putchar_fd(n + 87, 0);
    else
        ft_putchar_fd(n + 48, 0);
}

void	printf_p(va_list *my_list)
{
    size_t c;

    c = va_arg(*my_list, size_t);
    write(1, "0x", 2);
    ft_DecToHexa_plus((size_t)c);
}

/*
int main(void)
{
    unsigned int a=59;
    int b= 345325;
    int c;
    
    printf_p(a);
    printf("lol");
    printf("\nreel printf p = %p\n", a);
    printf("reel printf X = %p\n", a);
    return 0;
}*/
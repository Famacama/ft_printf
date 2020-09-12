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

void    find_value_Hexa(size_t n)
{
    if (n > 15)
    {
        ft_DecToHexa_plus(n / 16);
        n %= 16;
        l_value++;
    }
   if (n > 9)
        l_value++;
    else
        l_value++;
}

void	printf_p(va_list *my_list)
{
    //size_t c;
    if(pas == 0)
    {
        p = va_arg(*my_list, size_t);
        l_value = 0;
        find_value_Hexa(p);
        l_value += 2;
        //printf("l_value %d\n", l_value);
        pas = 1;
    }
    else
    {
        //write(1, "0x", 2);
        ft_DecToHexa_plus((size_t)p);
        pas = 0;
    }
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
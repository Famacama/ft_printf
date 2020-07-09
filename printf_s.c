//copie x char
#include "printf.h"

void    printf_s(va_list *my_list)
{
    char *str;
	
	str = va_arg(*my_list, char *);
	ft_putstr_fd(str, 0);
}

/*
int main(int argc, char **argv)
{
    if (argc != 2)
        return 0;
    //printf("%s\n",argv[1]);
    printf_s(argv[1]);
    return 0;
}*/
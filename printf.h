#ifndef PRINTF_H
# define PRINTF_H

#include "libft/libft.h"
#include <unistd.h>
#include <stdio.h>
#include <stdint.h>
#include <stdarg.h>

int l_value;
int precision;
int pas;


//int y = 0;
//symbol = 1;

char *s;
size_t p;
int d;
unsigned int u;

//i = 0;
int     ft_printf(const char *str, ...);
void	printf_c(va_list *my_list);
void    printf_s(va_list *my_list);
void	printf_p(va_list *my_list);
void    printf_d(va_list *my_list);
void	printf_i(va_list *my_list);
void    printf_u(va_list *my_list);
void    printf_x(va_list *my_list);
void    printf_xX(va_list *my_list);
void    printf_100(va_list *my_list);

void	ft_DecToHexa(size_t n);
void	ft_DecToHexa_plus(size_t n);
void	ft_DecToHexa_moins(size_t n);
void	ft_putnbr_u_fd(unsigned int n);
void	ft_putchar_fd(char c, int fd);
size_t	ft_strlen(const char *s);
int		main(void);
void	ft_putchar_fd(char c, int fd);
int     FindIndex(char *TabIndex, char flag);
int     find_value_d(size_t d);
int     find_flag_function();
int     find_conversion(const char *str);
void    find_widht_V(const char *str, va_list *my_list);


#endif

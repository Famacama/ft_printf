#ifndef _PRINTF_H
# define _PRINTF_H

#include "libft/libft.h"
#include <unistd.h>
#include <stdio.h>
#include <stdint.h>
#include <stdarg.h>

int l_value;
int r;
char *s;
char *g_string_null;
int do_not_print;
int zero_for_precision;
int length_value;

typedef struct s_conversion_and_flags
{
    int conversion;
    int flag_minus;
    int flag_zero;
    int flag_width;
    int flag_precision;
}               t_cad;  

t_cad cad;

int     ft_printf(const char *str, ...);
void	printf_c(va_list *my_list);
void    printf_s(va_list *my_list);
void	printf_p(va_list *my_list);
void    printf_d(va_list *my_list);
void	printf_i(va_list *my_list);
void    printf_u(va_list *my_list);
void    printf_x(va_list *my_list);
void    printf_xX(va_list *my_list);
void    printf_100(void);

void    find_length_hexa(size_t  n);

void	ft_DecToHexa(size_t n);
void	ft_DecToHexa_plus(size_t n);
void    ft_DecToHexa_u(unsigned int n);
void    find_length_hexa_x(unsigned int n);
int     find_value_d(size_t d);

#endif

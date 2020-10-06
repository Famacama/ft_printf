/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <famacama@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 10:03:33 by famacama          #+#    #+#             */
/*   Updated: 2020/10/06 10:11:33 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PRINTF_H
# define _PRINTF_H

#include "libft/libft.h"
#include <unistd.h>
#include <stdio.h>
#include <stdint.h>
#include <stdarg.h>

int l_value;
int r;
int y;
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
va_list my_list;

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
void	ft_DecToHexa_plus(size_t n);
void    ft_DecToHexa_u(unsigned int n);
void    find_length_hexa_x(unsigned int n);
int     find_value_d(size_t d);
int     ft_printf_atoi(const char *str);
int     find_conversion(const char *str);
void    find_all_flags_and_conversion(const char *str, va_list *my_list);
void    init_struct_to_begin_value(void);
void    calculate_widht(const char *str, va_list *my_list);
void    calculate_presision(const char *str, va_list *my_list);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <famacama@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 10:03:33 by famacama          #+#    #+#             */
/*   Updated: 2020/10/09 13:06:38 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PRINTF_H
# define _PRINTF_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdio.h>
# include <stdint.h>
# include <stdarg.h>

int		g_l_value;
int		g_r;
int		g_y;
char	*g_s;
char	*g_string_null;
int		g_do_not_print;
int		g_zero_f_p;
int		g_length_value;

typedef struct		s_conversion_and_flags
{
	int				conversion;
	int				f_m;
	int				f_z;
	int				f_w;
	int				f_p;
}					t_cad;

t_cad				g_cad;
va_list				g_my_list;

int					ft_printf(const char *str, ...);
void				printf_c(va_list *g_my_list);
void				printf_s(va_list *g_my_list);
void				printf_p(va_list *g_my_list);
void				printf_d(va_list *g_my_list);
void				printf_i(va_list *g_my_list);
void				printf_u(va_list *g_my_list);
void				printf_x(va_list *g_my_list);
void				printf_xx(va_list *g_my_list);
void				printf_100(void);
void				find_length_hexa(size_t n);
void				ft_dectohexa_plus(size_t n);
void				ft_dectohexa_u(unsigned int n);
void				find_length_hexa_x(unsigned int n);
int					find_value_d(size_t d);
int					ft_printf_atoi(const char *str);
int					find_conversion(const char *str);
void				find_all_flags_and_conversion(const char *str,
													va_list *g_my_list);
void				init_struct_to_begin_value(void);
void				calculate_widht(const char *str, va_list *g_my_list);
void				calculate_presision(const char *str, va_list *g_my_list);

static void (*g_tabfunction[10]) (va_list *) = {printf_c, printf_s, printf_p,
	printf_d, printf_i, printf_u, printf_x, printf_xx};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <famacama@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 10:01:52 by famacama          #+#    #+#             */
/*   Updated: 2020/10/09 13:14:22 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	calculate_widht(const char *str, va_list *g_my_list)
{
	if (str[g_y] == '*')
	{
		(g_cad).f_w = va_arg(*g_my_list, int);
		if ((g_cad).f_w < 0)
		{
			(g_cad).f_w *= -1;
			(g_cad).f_m = 1;
		}
	}
	else
		(g_cad).f_w = ft_printf_atoi(str);
}

void	calculate_presision(const char *str, va_list *g_my_list)
{
	g_y++;
	if ((str[g_y] >= '0') && (str[g_y] <= '9'))
		(g_cad).f_p = ft_printf_atoi(str);
	else if (str[g_y] == '*')
	{
		(g_cad).f_p = va_arg(*g_my_list, int);
		if ((g_cad).f_p < 0)
			(g_cad).f_p = -1;
	}
	else
		(g_cad).f_p = 0;
}

void	find_all_flags_and_conversion(const char *str, va_list *g_my_list)
{
	while (str[g_y] && str && str[g_y + 1])
	{
		g_y++;
		if (str[g_y] == '-' && str[g_y])
			(g_cad).f_m = 1;
		else if ((str[g_y] == '0') && (str[g_y]) && ((g_cad).f_z != 1))
			(g_cad).f_z = 1;
		else if (((str[g_y] >= '0') && (str[g_y] <= '9')) || (str[g_y] == '*'))
			calculate_widht(str, g_my_list);
		else if (str[g_y] == '.')
			calculate_presision(str, g_my_list);
		if (find_conversion(str) != -1)
			return ;
	}
}

int		ft_printf(const char *str, ...)
{
	g_y = 0;
	g_r = 0;
	va_start(g_my_list, str);
	while (str[g_y] && str)
	{
		if (str[g_y] == '%')
		{
			init_struct_to_begin_value();
			find_all_flags_and_conversion(str, &g_my_list);
			if (((g_cad).conversion < 8) && ((g_cad).conversion > -1))
				(*g_tabfunction[(g_cad).conversion])(&g_my_list);
			else if ((g_cad).conversion == 8)
				printf_100();
			else
				g_y++;
		}
		else
		{
			ft_putchar_fd(str[g_y], 0);
			g_y++;
		}
	}
	return (g_r);
}

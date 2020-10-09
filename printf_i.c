/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <famacama@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 10:02:43 by famacama          #+#    #+#             */
/*   Updated: 2020/10/09 13:20:08 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	check_for_printf_i(int i)
{
	if (((g_cad).f_p > (g_length_value)))
	{
		(g_cad).f_z = -1;
		g_zero_f_p = 1;
		if ((g_cad).f_w <= (((g_cad).f_p)))
			(g_cad).f_m = -1;
		(g_cad).f_w -= (((g_cad).f_p));
		(g_cad).f_p -= g_length_value;
	}
	else
	{
		if ((g_cad).f_p <= (g_length_value) && ((g_cad).f_p != -1))
		{
			if (i == 0 && (g_cad).f_p == 0)
			{
				if ((g_cad).f_w)
					(g_cad).f_w++;
				g_do_not_print = 1;
			}
			if ((g_cad).f_p <= (g_length_value))
				(g_cad).f_z = -1;
			(g_cad).f_p -= (g_length_value);
		}
		(g_cad).f_w -= g_length_value;
	}
}

void	write_when_not_minus_i(int i)
{
	if ((g_cad).f_z == -1)
	{
		while ((g_cad).f_w-- > 0)
			(g_cad).f_z == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0);
		if (i < 0)
			ft_putchar_fd('-', 0);
		while ((g_cad).f_p-- > 0)
			g_zero_f_p == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0);
		if (!g_do_not_print)
			ft_putnbr_fd(i, 0);
	}
	else
	{
		if (i < 0 && (g_cad).f_z == 1)
			ft_putchar_fd('-', 0);
		while ((g_cad).f_w-- > 0)
			(g_cad).f_z == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0);
		if (i < 0 && (g_cad).f_z != 1)
			ft_putchar_fd('-', 0);
		while ((g_cad).f_p-- > 0)
			g_zero_f_p == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0);
		if (!g_do_not_print)
			ft_putnbr_fd(i, 0);
	}
}

void	printf_i(va_list *g_my_list)
{
	int i;

	i = va_arg(*g_my_list, int);
	g_length_value = find_value_d(i);
	g_do_not_print = 0;
	g_zero_f_p = 0;
	if (i < 0 && (g_cad).f_p != -1)
		(g_cad).f_p += 1;
	check_for_printf_i(i);
	if ((g_cad).f_m == -1)
		write_when_not_minus_i(i);
	else
	{
		if (i < 0)
			ft_putchar_fd('-', 0);
		while ((g_cad).f_p-- > 0)
			g_zero_f_p == 1 ? ft_putchar_fd('0', 0)
				: ft_putchar_fd(' ', 0);
		if (!g_do_not_print)
			ft_putnbr_fd(i, 0);
		while ((g_cad).f_w-- > 0)
			ft_putchar_fd(' ', 0);
	}
}

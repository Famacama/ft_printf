/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_m_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <famacama@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 12:35:57 by famacama          #+#    #+#             */
/*   Updated: 2020/10/09 13:24:25 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_dectohexa_moins(unsigned int n)
{
	if (n > 15)
	{
		ft_dectohexa_moins(n / 16);
		n %= 16;
	}
	if (n > 9)
		ft_putchar_fd(n + 55, 0);
	else
		ft_putchar_fd(n + 48, 0);
}

void	check_for_printf_xx(int x)
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
			if (x == 0 && (g_cad).f_p == 0)
			{
				if ((g_cad).f_w)
					(g_cad).f_w++;
				g_do_not_print = 1;
			}
			if ((g_cad).f_p < (g_length_value))
				(g_cad).f_z = -1;
			(g_cad).f_p -= (g_length_value);
		}
		(g_cad).f_w -= g_length_value;
	}
}

void	write_when_not_minus_xx(int x)
{
	if ((g_cad).f_z == -1)
	{
		while ((g_cad).f_w-- > 0)
			(g_cad).f_z == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0);
		while ((g_cad).f_p-- > 0)
			g_zero_f_p == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0);
		if (!g_do_not_print)
			ft_dectohexa_moins((size_t)x);
	}
	else
	{
		if (x < 0 && (g_cad).f_z != 1)
			ft_putchar_fd('-', 0);
		while ((g_cad).f_w-- > 0)
			(g_cad).f_z == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0);
		while ((g_cad).f_p-- > 0)
			g_zero_f_p == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0);
		if (!g_do_not_print)
			ft_dectohexa_moins((size_t)x);
	}
}

void	printf_xx(va_list *g_my_list)
{
	int x;

	g_do_not_print = 0;
	g_zero_f_p = 0;
	x = va_arg(*g_my_list, int);
	find_length_hexa_x(x);
	check_for_printf_xx(x);
	if ((g_cad).f_m == -1)
		write_when_not_minus_xx(x);
	else
	{
		while ((g_cad).f_p-- > 0)
			g_zero_f_p == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0);
		if (!g_do_not_print)
			ft_dectohexa_moins((size_t)x);
		while ((g_cad).f_w-- > 0)
			ft_putchar_fd(' ', 0);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <famacama@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 10:02:52 by famacama          #+#    #+#             */
/*   Updated: 2020/10/09 13:01:57 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_dectohexa_plus(size_t n)
{
	if (n > 15)
	{
		ft_dectohexa_plus(n / 16);
		n %= 16;
	}
	if (n > 9)
		ft_putchar_fd(n + 87, 0);
	else
		ft_putchar_fd(n + 48, 0);
}

void	find_length_hexa(size_t n)
{
	if (n > 15)
	{
		find_length_hexa(n / 16);
		n %= 16;
	}
	if (n > 9)
		g_length_value++;
	else
		g_length_value++;
}

void	check_for_printf_p(size_t p)
{
	if (((g_cad).f_p > (g_length_value - 2)))
	{
		(g_cad).f_z = 1;
		(g_cad).f_m = -1;
		(g_cad).f_w = (((g_cad).f_p + 2));
		(g_cad).f_w -= g_length_value;
	}
	else
	{
		if (p == 0 && (g_cad).f_p == 0)
		{
			if ((g_cad).f_w)
				(g_cad).f_w++;
			g_do_not_print = 1;
		}
		if ((g_cad).f_p < (g_length_value - 2) && ((g_cad).f_p != -1))
			(g_cad).f_z = -1;
		(g_cad).f_w -= g_length_value;
	}
}

void	write_when_not_minus_p(size_t p)
{
	if ((g_cad).f_z == -1)
	{
		while ((g_cad).f_w-- > 0)
			(g_cad).f_z == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0);
		ft_putstr_fd("0x", 0);
	}
	else
	{
		ft_putstr_fd("0x", 0);
		while ((g_cad).f_w-- > 0)
			(g_cad).f_z == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0);
	}
	if (!g_do_not_print)
		ft_dectohexa_plus((size_t)p);
}

void	printf_p(va_list *g_my_list)
{
	size_t p;

	p = va_arg(*g_my_list, size_t);
	g_length_value = 0;
	find_length_hexa(p);
	g_length_value += 2;
	g_do_not_print = 0;
	check_for_printf_p(p);
	if ((g_cad).f_m == -1)
		write_when_not_minus_p(p);
	else
	{
		ft_putstr_fd("0x", 0);
		if (!g_do_not_print)
			ft_dectohexa_plus((size_t)p);
		while ((g_cad).f_w-- > 0)
			ft_putchar_fd(' ', 0);
	}
}

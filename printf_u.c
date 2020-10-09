/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <famacama@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 10:03:10 by famacama          #+#    #+#             */
/*   Updated: 2020/10/09 13:10:56 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		find_value_u(unsigned int number)
{
	g_l_value = 0;
	if (number <= 0)
	{
		number *= -1;
		g_l_value = 1;
	}
	while (number > 0)
	{
		number /= 10;
		g_l_value++;
	}
	return (g_l_value);
}

void	ft_putnbr_uu_fd(unsigned int n, int fd)
{
	unsigned int nbr;

	if (n < 0)
	{
		nbr = -n;
		ft_putchar_fd('-', 0);
	}
	else
		nbr = n;
	if (nbr > 9)
	{
		ft_putnbr_uu_fd(nbr / 10, fd);
		ft_putnbr_uu_fd(nbr % 10, fd);
	}
	if (nbr < 10)
	{
		ft_putchar_fd(nbr + 48, fd);
	}
}

void	check_for_printf_u(int u)
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
			if (u == 0 && (g_cad).f_p == 0)
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

void	write_when_not_minus_u(int u)
{
	if ((g_cad).f_z == -1)
	{
		while ((g_cad).f_w-- > 0)
			(g_cad).f_z == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0);
		while ((g_cad).f_p-- > 0)
			g_zero_f_p == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0);
		if (!g_do_not_print)
			ft_putnbr_uu_fd(u, 0);
	}
	else
	{
		while ((g_cad).f_w-- > 0)
			(g_cad).f_z == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0);
		while ((g_cad).f_p-- > 0)
			g_zero_f_p == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0);
		if (!g_do_not_print)
			ft_putnbr_uu_fd(u, 0);
	}
}

void	printf_u(va_list *g_my_list)
{
	int	u;

	g_do_not_print = 0;
	g_zero_f_p = 0;
	u = va_arg(*g_my_list, int);
	g_length_value = find_value_u(u);
	check_for_printf_u(u);
	if ((g_cad).f_m == -1)
		write_when_not_minus_u(u);
	else
	{
		while ((g_cad).f_p-- > 0)
			g_zero_f_p == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0);
		if (!g_do_not_print)
			ft_putnbr_uu_fd(u, 0);
		while ((g_cad).f_w-- > 0)
			ft_putchar_fd(' ', 0);
	}
}

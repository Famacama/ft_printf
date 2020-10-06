/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <famacama@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 10:02:40 by famacama          #+#    #+#             */
/*   Updated: 2020/10/06 10:02:42 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	check_for_printf_d(int d)
{
	if (((cad).flag_precision > (length_value)))
	{
		(cad).flag_zero = -1;
		zero_for_precision = 1;
		if ((cad).flag_width <= (((cad).flag_precision)))
			(cad).flag_minus = -1;
		(cad).flag_width -= (((cad).flag_precision));
		(cad).flag_precision -= length_value;
	}
	else
	{
		if ((cad).flag_precision <= (length_value) && ((cad).flag_precision != -1))
		{
			if (d == 0 && (cad).flag_precision == 0)
			{
				if ((cad).flag_width)
					(cad).flag_width++;
				do_not_print = 1;
			}
			if ((cad).flag_precision < (length_value))
				(cad).flag_zero = -1;
			(cad).flag_precision -= (length_value);
		}
		(cad).flag_width -= length_value;
	}
}

void	write_when_not_minus(int d)
{
	if ((cad).flag_zero == -1)
	{
		while ((cad).flag_width-- > 0)
			(cad).flag_zero == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0);
		if (d < 0)
			ft_putchar_fd('-', 0);
		while ((cad).flag_precision-- > 0)
			zero_for_precision == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0);
		if (!do_not_print)
			ft_putnbr_fd(d, 0);
	}
	else
	{
		if (d < 0 && (cad).flag_zero == 1)
			ft_putchar_fd('-', 0);
		while ((cad).flag_width-- > 0)
			(cad).flag_zero == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0);
		if (d < 0 && (cad).flag_zero != 1)
			ft_putchar_fd('-', 0);
		while ((cad).flag_precision-- > 0)
			zero_for_precision == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0);
		if (!do_not_print)
			ft_putnbr_fd(d, 0);
	}
}

void	printf_d(va_list *my_list)
{
	int d;

	d = va_arg(*my_list, int);
	length_value = find_value_d(d);
	do_not_print = 0;
	zero_for_precision = 0;
	if (d < 0 && (cad).flag_precision != -1)
		(cad).flag_precision += 1;
	check_for_printf_d(d);
	if ((cad).flag_minus == -1)
		write_when_not_minus(d);
	else
	{
		if (d < 0)
			ft_putchar_fd('-', 0);
		while ((cad).flag_precision-- > 0)
			zero_for_precision == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0);
		if (!do_not_print)
			ft_putnbr_fd(d, 0);
		while ((cad).flag_width-- > 0)
			ft_putchar_fd(' ', 0);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <famacama@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 10:02:43 by famacama          #+#    #+#             */
/*   Updated: 2020/10/06 10:02:45 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	check_for_printf_i(int i)
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
			if (i == 0 && (cad).flag_precision == 0)
			{
				if ((cad).flag_width)
					(cad).flag_width++;
				do_not_print = 1;
			}
			if ((cad).flag_precision <= (length_value))
				(cad).flag_zero = -1;
			(cad).flag_precision -= (length_value);
		}
		(cad).flag_width -= length_value;
	}
}

void	write_when_not_minus_i(int i)
{
	if ((cad).flag_zero == -1)
	{
		while ((cad).flag_width-- > 0)
			(cad).flag_zero == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0);
		if (i < 0)
			ft_putchar_fd('-', 0);
		while ((cad).flag_precision-- > 0)
			zero_for_precision == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0);
		if (!do_not_print)
			ft_putnbr_fd(i, 0);
	}
	else
	{
		if (i < 0 && (cad).flag_zero == 1)
			ft_putchar_fd('-', 0);
		while ((cad).flag_width-- > 0)
			(cad).flag_zero == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0);
		if (i < 0 && (cad).flag_zero != 1)
			ft_putchar_fd('-', 0);
		while ((cad).flag_precision-- > 0)
			zero_for_precision == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0);
		if (!do_not_print)
			ft_putnbr_fd(i, 0);
	}
}

void	printf_i(va_list *my_list)
{
	int i;

	i = va_arg(*my_list, int);
	length_value = find_value_d(i);
	do_not_print = 0;
	zero_for_precision = 0;
	if (i < 0 && (cad).flag_precision != -1)
		(cad).flag_precision += 1;
	check_for_printf_i(i);
	if ((cad).flag_minus == -1)
		write_when_not_minus_i(i);
	else
	{
		if (i < 0)
			ft_putchar_fd('-', 0);
		while ((cad).flag_precision-- > 0)
			zero_for_precision == 1 ? ft_putchar_fd('0', 0)
			 : ft_putchar_fd(' ', 0);
		if (!do_not_print)
			ft_putnbr_fd(i, 0);
		while ((cad).flag_width-- > 0)
			ft_putchar_fd(' ', 0);
	}
}

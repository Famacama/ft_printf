/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <famacama@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 10:02:52 by famacama          #+#    #+#             */
/*   Updated: 2020/10/06 10:02:54 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_DecToHexa_plus(size_t n)
{
	if (n > 15)
	{
		ft_DecToHexa_plus(n / 16);
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
		length_value++;
	else
		length_value++;
}

void	check_for_printf_p(size_t p)
{
	if (((cad).flag_precision > (length_value - 2)))
	{
		(cad).flag_zero = 1;
		(cad).flag_minus = -1;
		(cad).flag_width = (((cad).flag_precision + 2));
		(cad).flag_width -= length_value;
	}
	else
	{
		if (p == 0 && (cad).flag_precision == 0)
		{
			if ((cad).flag_width)
				(cad).flag_width++;
			do_not_print = 1;
		}
		if ((cad).flag_precision < (length_value - 2) && ((cad).flag_precision != -1))
			(cad).flag_zero = -1;
		(cad).flag_width -= length_value;
	}
}

void	write_when_not_minus_p(size_t p)
{
	if ((cad).flag_zero == -1)
	{
		while ((cad).flag_width-- > 0)
			(cad).flag_zero == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0);
		ft_putstr_fd("0x", 0);
	}
	else
	{
		ft_putstr_fd("0x", 0);
		while ((cad).flag_width-- > 0)
			(cad).flag_zero == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0);
	}
	if (!do_not_print)
		ft_DecToHexa_plus((size_t)p);
}

void	printf_p(va_list *my_list)
{
	size_t p;

	p = va_arg(*my_list, size_t);
	length_value = 0;
	find_length_hexa(p);
	length_value += 2;
	do_not_print = 0;
	check_for_printf_p(p);
	if ((cad).flag_minus == -1)
		write_when_not_minus_p(p);
	else
	{
		ft_putstr_fd("0x", 0);
		if (!do_not_print)
			ft_DecToHexa_plus((size_t)p);
		while ((cad).flag_width-- > 0)
			ft_putchar_fd(' ', 0);
	}
}

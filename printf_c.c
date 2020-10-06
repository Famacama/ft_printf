/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_c.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <famacama@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 10:02:28 by famacama          #+#    #+#             */
/*   Updated: 2020/10/06 10:02:37 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	printf_c(va_list *my_list)
{
	char c;

	c = va_arg(*my_list, int);
	length_value = 1;
	(cad).flag_width -= length_value;
	if ((cad).flag_minus == -1)
	{
		while ((cad).flag_width-- > 0)
			(cad).flag_zero == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0);
		ft_putchar_fd(c, 0);
	}
	else
	{
		ft_putchar_fd(c, 0);
		while ((cad).flag_width-- > 0)
			ft_putchar_fd(' ', 0);
	}
}

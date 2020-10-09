/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_100.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <famacama@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 10:02:21 by famacama          #+#    #+#             */
/*   Updated: 2020/10/09 12:37:13 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	printf_100(void)
{
	char cent;

	cent = '%';
	g_length_value = 1;
	(g_cad).f_w -= g_length_value;
	if ((g_cad).f_m == -1)
	{
		while ((g_cad).f_w-- > 0)
			(g_cad).f_z == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0);
		ft_putchar_fd('%', 0);
	}
	else
	{
		ft_putchar_fd('%', 0);
		while ((g_cad).f_w-- > 0)
			ft_putchar_fd(' ', 0);
	}
}

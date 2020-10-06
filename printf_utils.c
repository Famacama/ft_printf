/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <famacama@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 10:03:16 by famacama          #+#    #+#             */
/*   Updated: 2020/10/06 10:03:18 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf_atoi(const char *str)
{
	int n;

	n = 0;
	while ((str[y] >= '0' && str[y] <= '9') && str[y])
	{
		n *= 10;
		n += str[y] - 48;
		y++;
	}
	y--;
	return (n);
}

int	find_conversion(const char *str)
{
	int i;
	char TabIndex[10] = {'c', 's', 'p', 'd', 'i', 'u', 'x', 'X', '%', 0};

	i = 0;
	while ((str[y] != TabIndex[i]) && TabIndex[i] && str[y])
		i++;
	(i == 9) ? ((cad).conversion = -1) : ((cad).conversion = i);
	if ((cad).conversion > 9 || ((cad).conversion < 0))
		return (-1);
	else
	{
		y++;
		return ((cad).conversion);
	}
}

void	init_struct_to_begin_value(void)
{
	cad.conversion = -1;
	cad.flag_minus = -1;
	cad.flag_precision = -1;
	cad.flag_width = -1;
	cad.flag_zero = -1;
	length_value = 0;
}

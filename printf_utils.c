/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <famacama@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 13:24:08 by famacama          #+#    #+#             */
/*   Updated: 2020/10/09 13:32:05 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		ft_printf_atoi(const char *str)
{
	int n;

	n = 0;
	while ((str[g_y] >= '0' && str[g_y] <= '9') && str[g_y])
	{
		n *= 10;
		n += str[g_y] - 48;
		g_y++;
	}
	g_y--;
	return (n);
}

int		find_conversion(const char *str)
{
	static char	tabindex[10] = {'c', 's', 'p', 'd', 'i', 'u', 'x', 'X', '%', 0};
	int			i;

	i = 0;
	while ((str[g_y] != tabindex[i]) && tabindex[i] && str[g_y])
		i++;
	if (i == 9)
		(g_cad).conversion = -1;
	else
		(g_cad).conversion = i;
	if ((g_cad).conversion > 9 || ((g_cad).conversion < 0))
		return (-1);
	else
	{
		g_y++;
		return ((g_cad).conversion);
	}
}

void	init_struct_to_begin_value(void)
{
	g_cad.conversion = -1;
	g_cad.f_m = -1;
	g_cad.f_p = -1;
	g_cad.f_w = -1;
	g_cad.f_z = -1;
	g_length_value = 0;
}

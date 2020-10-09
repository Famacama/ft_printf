/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <famacama@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 10:02:58 by famacama          #+#    #+#             */
/*   Updated: 2020/10/09 12:45:07 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	write_printf_s(void)
{
	int i;

	i = 0;
	if ((g_cad).f_m == -1)
	{
		while ((g_cad).f_w-- > 0)
			(g_cad).f_z == 1 ? ft_putchar_fd('0', 0) : ft_putchar_fd(' ', 0);
		if (g_s == NULL)
			while (g_string_null && g_string_null[i] && g_length_value--)
				ft_putchar_fd(g_string_null[i++], 0);
		else
			while (g_s && g_s[i] && g_length_value--)
				ft_putchar_fd(g_s[i++], 0);
	}
	else
	{
		if (g_s == NULL)
			while (g_string_null && g_string_null[i] && g_length_value--)
				ft_putchar_fd(g_string_null[i++], 0);
		else
			while (g_s && g_s[i] && g_length_value--)
				ft_putchar_fd(g_s[i++], 0);
		while ((g_cad).f_w-- > 0)
			ft_putchar_fd(' ', 0);
	}
}

void	printf_s(va_list *g_my_list)
{
	int i;

	g_s = va_arg(*g_my_list, char *);
	g_length_value = ft_strlen(g_s);
	i = 0;
	g_string_null = "(null)";
	if (g_s == NULL)
		g_length_value = 6;
	if (((g_cad).f_p < g_length_value))
	{
		if ((g_cad).f_p != -1)
			(g_cad).f_w += (g_length_value - (g_cad).f_p);
		(g_cad).f_w -= g_length_value;
		g_length_value = (g_cad).f_p;
	}
	else
		(g_cad).f_w -= g_length_value;
	write_printf_s();
}

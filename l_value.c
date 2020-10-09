/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   l_value.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <famacama@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 11:47:14 by famacama          #+#    #+#             */
/*   Updated: 2020/10/09 13:12:42 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	find_value_d(size_t d)
{
	int number;

	number = d;
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

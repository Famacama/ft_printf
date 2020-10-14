/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <famacama@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 17:36:43 by famacama          #+#    #+#             */
/*   Updated: 2020/08/04 15:41:09 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	size_t		i;
	int			s;
	long long	n;

	i = 0;
	s = 1;
	n = 0;
	while (((str[i] >= 9 && str[i] <= 13) || str[i] == 32) && str[i])
		i++;
	if ((str[i] == '-' || str[i] == '+') && str[i])
		if (str[i++] == '-')
			s = -s;
	while ((str[i] >= '0' && str[i] <= '9') && str[i])
	{
		n *= 10;
		n += str[i] - 48;
		i++;
		if (n < 0 && s == -1)
			return (0);
		if (n < 0 && s == 1)
			return (-1);
	}
	n *= s;
	return (n);
}

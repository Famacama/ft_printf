/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 14:32:39 by famacama          #+#    #+#             */
/*   Updated: 2020/06/07 13:46:14 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putstr_fd(char *s, int fd)
{
	int i;

	i = 0;
	if (s)
		while (s && s[i])
		{
			ft_putchar_fd(s[i], fd);
			i++;
		}
}
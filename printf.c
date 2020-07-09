/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 12:16:10 by macbook           #+#    #+#             */
/*   Updated: 2020/07/08 22:37:46 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
/*
void    printf_d(va_list *my_list)
{
	int d;
    
	d = va_arg(*my_list, int);
	ft_putnbr_fd(d, 0);
}

void    printf_s(va_list *my_list)
{
    char *str;
	
	str = va_arg(*my_list, char *);
	ft_putstr_fd(str, 0);
}

void	printf_c(va_list *my_list)
{
	char c;

	c = va_arg(*my_list, int);
	write(1, &c, 1);
}
*/
int FindIndex(char *TabIndex, char flag)
{
	int i;

	i = 0;
	while(TabIndex[i])
	{
		if(TabIndex[i] == flag)
			return(i);
		i++;
	}
	return(-1);
}
int ft_printf(const char *str, ...)
{  
	va_list my_list;
	int i; 
	int flag;
	void (*TabFunction[9]) (va_list *) = {printf_c, printf_s, printf_p, printf_d, printf_i, printf_u, printf_x, printf_xX, printf_100};
	char TabIndex[10] = {'c', 's', 'p', 'd', 'i', 'u', 'x', 'X', '%', 0};

    i = 0;
	flag = 0;
	va_start(my_list, str);
    while(str[i])
    {
		if(i != 0 && str[i - 1] == '%')
		{
			flag = FindIndex(TabIndex, str[i]);
			if(flag != -1)
				(*TabFunction[flag]) (&my_list);
			if(str[i] == '%' && str[i - 2] != '%')
				i++;
		}
		else if (str[i] != '%')
			write(1, &str[i], 1);
		i++;
	}
	return(0);
    
}

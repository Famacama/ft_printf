/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   //printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <famacama@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 12:16:10 by macbook           #+#    #+#             */
/*   Updated: 2020/08/26 12:11:33 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int y = 0;
int flag = 0;

int symbol_min = 1;
int symbol_plus = 0;
int conversion;
int width = 0;
va_list my_list;
int start_for_width_f;
int pas = 0;
int zero_option = 0;











int find_widht(const char *str, va_list *my_list, int index)
{
	while (((str[index] >= 48 && str[index] <= 57) || (str[index] == '*')))
	{
		if (str[index] == '*')
		{
			width = va_arg(*my_list, int);
			if (width < 0)
			{
				symbol_min = -1;
				width *= -1;
				return(index);
			}
		}
		width  *= 10;
		width += str[index] - 48;
		index++;
	}
	return(index);
}























void find_precision(const char *str, va_list *my_list, int index)
{
	while (((str[index] >= 48 && str[index] <= 57) || (str[index] == '*')))
	{
		if (str[index] == '*')
		{
			width = va_arg(*my_list, int);
			if (width < 0)
			{
				symbol_min = -1;
				width *= -1;
			}
		}
		precision  *= 10;
		precision += str[index] - 48;
		index++;
	}
}





















void find_widht_V(const char *str, va_list *my_list)
{
	int index;

	void (*TabFunction[9]) (va_list *) = {printf_c, printf_s, printf_p, 
	printf_d, printf_i, printf_u, printf_x, printf_xX, printf_100};

	index = start_for_width_f;
	width = 0;
	while (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
			symbol_min = -1;
		if (str[index] == '+')
			symbol_plus = 1;
		index++;
	}
	index = find_widht(str, my_list, index);
	if (str[index] == '.')
	{	
		index++;
		precision = 0;
		find_precision(str, my_list, index);
	}		
}



































int find_conversion(const char *str)
{
	conversion = y;

	while (str[conversion] && (str[conversion] != 'c' && str[conversion] != 's' 
	&& str[conversion] != 'p' && str[conversion] != 'd' 
	&& str[conversion] != 'i' && str[conversion] != 'u' 
	&& str[conversion] != 'x' && str[conversion] != 'X' 
	&& str[conversion] != '%'))
	{
		if (str[conversion] == '0' && flag != 0)
			zero_option = 1;
		conversion++;
	}
	y = conversion;
	if (str[conversion])
	{
		conversion = str[conversion];
		return (conversion);
	}
	return (0);
}


























int find_flag_function(char *TabIndex)
{
	int index;

	index = 0;
	while (TabIndex[index] != conversion)
		index++;
	return (index);
}























void functions_0_1_8_char_s(void)
{
	void (*TabFunction[9]) (va_list *) = {printf_c, printf_s, printf_p, 
	printf_d, printf_i, printf_u, printf_x, printf_xX, printf_100};
	
	(*TabFunction[flag]) (&my_list);
	(flag == 0) ? (width -= l_value) : 
	((precision == 0) ? (width = 0) : (width -= l_value));
	if(symbol_min == 1)
	{
		while (width-- > 0)
			zero_option == 1 ? write(1, "0", 1) : write(1, "*", 1);
		(*TabFunction[flag]) (&my_list);
	}
	else
	{
		(*TabFunction[flag]) (&my_list);
		while (width-- > 0)
			zero_option == 1 ? write(1, "0", 1) : write(1, "*", 1);
	}
}































void functions_3_4_7_char_s(void)
{
	void (*TabFunction[9]) (va_list *) = {printf_c, printf_s, printf_p, 
	printf_d, printf_i, printf_u, printf_x, printf_xX, printf_100};
	
	(*TabFunction[flag]) (&my_list);
	//(flag == 0) ? (width -= l_value) : 
	//((precision == 0) ? (width = 0) : (width -= l_value));
	width -= l_value;
	precision -= l_value;
	if(flag == 2)
		precision += 2;
	if(precision > 0)
		width -= precision;
	if(symbol_min == 1)
	{
		while (width-- > 0)
			zero_option == 1 ? write(1, "0", 1) : write(1, "*", 1);
		if(flag == 2)
			write(1, "0x", 2);
		while (precision-- > 0)
			write(1, "0", 1);
		(*TabFunction[flag]) (&my_list);
	}
	else
	{
		if(flag == 2)
			write(1, "0x", 2);
		while (precision-- > 0)
			write(1, "0", 1);
		(*TabFunction[flag]) (&my_list);
		while (width-- > 0)
			zero_option == 1 ? write(1, "0", 1) : write(1, "*", 1);
	}
}























int ft_printf(const char *str, ...)
{  
	void (*TabFunction[9]) (va_list *) = {printf_c, printf_s, printf_p, 
	printf_d, printf_i, printf_u, printf_x, printf_xX, printf_100};
	char TabIndex[10] = {'c', 's', 'p', 'd', 'i', 'u', 'x', 'X', '%', 0};

	va_start(my_list, str);	
	y = 0;
	while (str[y])
	{
		if(y != 0 && str[y - 1] == '%')
		{
			start_for_width_f = y;
			if (find_conversion(str) == 0)
				return (0);
			precision = -1;
			find_widht_V(str, &my_list);
			flag = find_flag_function(TabIndex);
			if (flag == 0 || flag == 1 || flag == 8) // char *s
				functions_0_1_8_char_s();
   			else if (flag == 3 || flag == 4 || flag == 7) // int 
				functions_3_4_7_char_s();
			//else if (flag == 2 || flag == 6) // size_t
			//	functions_3_4_7_char_s();
			//else if (flag == 5) // unsigned int
			//	functions_3_4_7_char_s();
		}

		else if (str[y] != '%')
			write(1, &str[y], 1);
		y++;
	}
	return (0);
}

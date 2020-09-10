/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   l_value.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <famacama@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 11:47:14 by famacama          #+#    #+#             */
/*   Updated: 2020/09/03 16:11:25 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int find_value_d(size_t d)
{
    int number;
    number = d;
    if (number < 0)
    {
        number *= -1;
        l_value = 1;
    }
    while (number > 0)
    {
        number /= 10;
        l_value++;
    }
    return (l_value);
}
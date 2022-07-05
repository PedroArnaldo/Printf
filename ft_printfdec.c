/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfdec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parnaldo <parnaldo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:20:10 by parnaldo          #+#    #+#             */
/*   Updated: 2022/07/05 10:34:36 by parnaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libftprintf.h"

static int size_num(int n)
{
	int size;

	size = 1;
	if (n < 0)
		size++;
	n = n / 10;
	while (n)
	{
		n = n / 10;
		size++;
	}
	return (size);
}


int ft_printfdec(int n)
{
	int size;
	char * str_num;
	size = size_num(n);
	str_num = ft_itoa(n);
	ft_putstr(str_num);
	return (size);
}

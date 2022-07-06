/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfunsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parnaldo <parnaldo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:28:56 by parnaldo          #+#    #+#             */
/*   Updated: 2022/07/06 15:39:22 by parnaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	size_num(int n)
{
	int	size;

	size = 0;
	while (n)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char *ft_unsigned_itoa(unsigned int n)
{
	int			size;
	char			*str;

	size = size_num(n);
	str = (char *) malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (0);
	str[size] = '\0';
	while (size)
	{
		size--;
		str[size] = (n % 10) + 48;
		n = n / 10;
	}
	return (str);
}

int ft_print_unsigned(unsigned int n)
{
	int printf_len;
	char *num;

	printf_len = 0;
	if(n == 0)
		printf_len += write(1, "0", 1);
	else
	{
		num = ft_unsigned_itoa(n);
		printf_len += ft_putstr(num);
		free(num);
	}
	return (printf_len);
}

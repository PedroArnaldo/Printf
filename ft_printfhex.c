/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfhex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parnaldo <parnaldo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:35:21 by parnaldo          #+#    #+#             */
/*   Updated: 2022/07/06 16:15:10 by parnaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	size_num(int n)
{
	int	size;

	size = 0;
	while (n)
	{
		n = n / 16;
		size++;
	}
	return (size);
}

void ft_convert_to_hex(unsigned int n)
{
	if( n >= 16 )
	{
		ft_convert_to_hex(n / 16);
		ft_convert_to_hex(n % 16);
	}
	else
	{
		if(n <= 9)
			ft_putchar(n + '0');
		else if( n <= 10 && n <= 15)
		{
			ft_putchar(n - 10 + 'a');
		}
	}
}

int ft_printfhex(unsigned int n)
{
	int print_len;

	print_len = 0;
	if(n == 0)
		print_len += write(1, "0", 1);
	else
	{
		ft_convert_to_hex(n);
		print_len += size_num(n);
	}
	return (print_len);
}

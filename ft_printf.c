/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parnaldo <parnaldo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 13:51:11 by parnaldo          #+#    #+#             */
/*   Updated: 2022/07/01 19:22:40 by parnaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft.h"

int ft_printvar(const char c, va_list *var)
{
	if (c == 'c')
	{
	
	}
	else if (c == 's')
	else if (c == '%')
}

int ft_printf(const char *str, ...)
{
	int i;
	va_list args;
	int print_len;
	if(!str)
		return (0);
	i = 0;
	while (str[i])
	{
		if(str[i] == '%')
		{
			print_len  += ft_printvar(str[i + 1], args);
			i++;
		}
		else
		{
			print_len++;
		}
		i++;
	}
	return (print_len);
}

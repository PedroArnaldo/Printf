/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parnaldo <parnaldo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 13:51:11 by parnaldo          #+#    #+#             */
/*   Updated: 2022/07/05 16:17:09 by parnaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int ft_printvar(const char c, va_list var)
{
	if (c == 'c')
	{
		return (ft_putchar(va_arg(var, int)));
	}
	else if (c == 's')
	{
		return (ft_putstr(va_arg(var, char *)));
	}
	else if (c == 'i' || c == 'd')
	{
		return (ft_printfdec(va_arg(var, int)));
	}
	else if (c == 'u')
	{
		return (ft_printfunsigned(va_arg(var, int)));
	}
	else if (c == '%')
	{
		return (ft_putchar(c));
	}
	return (0);
}

int ft_printf(const char *str, ...)
{
	int i;
	va_list args;
	va_start(args, str);
	int print_len;
	if(!str)
		return (0);
	i = 0;
	print_len = 0;
	while (str[i])
	{
		if(str[i] == '%')
		{
			print_len += ft_printvar(str[i + 1], args);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			print_len++;
		}
		i++;
	}
	va_end(args);
	return (print_len);
}


int main()
{
	ft_printf("teste string %c  %% %s %i %u %u %% %% %%\n", 's', "string", 2, 6, -35);
}

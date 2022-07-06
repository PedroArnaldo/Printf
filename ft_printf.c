/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parnaldo <parnaldo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 13:51:11 by parnaldo          #+#    #+#             */
/*   Updated: 2022/07/06 16:12:55 by parnaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
		return (ft_print_unsigned(va_arg(var, int)));
	}
	else if(c == 'x')
	{
		return (ft_printfhex(va_arg(var, int)));
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

#include <stdio.h>
int main()
{
	ft_printf("teste string %c  %% %s %i %u %u %% %% %% %x\n", 's', "string", 2, 6, -35, 43);
	ft_printf("Teste porcentagem %% %% %% %% %%%%\n");
	ft_printf("Teste char %c %c %c %c\n", 'A', 'B', '!',  '?');
	ft_printf("%s %s\n", "teste", "string");
	ft_printf("teste decimal %i %d\n", 10, 40);
	ft_printf("teste unsigned %u %u\n", 78, -878);
	ft_printf("teste hex %x", 10 );
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfhex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parnaldo <parnaldo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:35:21 by parnaldo          #+#    #+#             */
/*   Updated: 2022/07/05 18:40:54 by parnaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	size_num(int n)
{
	int	size;

	size = 1;
	if (n < 0)
		size++;
	n = n / 16;
	while (n)
	{
		n = n / 16;
		size++;
	}
	return (size);
}

int ft_printfhex(int n)
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
		if (n >= 10 && n <= 15)
		{
			str[size] = (n % 16) + 89;
		}
		size--;
		str[size] = (n % 16) + 48;
		n = n / 16;
		
	}
	ft_putstr(str);
	free(str);
	return (size);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfunsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parnaldo <parnaldo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:28:56 by parnaldo          #+#    #+#             */
/*   Updated: 2022/07/05 18:37:37 by parnaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	size_num(int n)
{
	int	size;

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

int ft_printfunsigned(unsigned int n)
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
	ft_putstr(str);
	free(str);
	return (size);
}

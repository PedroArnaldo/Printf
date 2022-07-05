/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfutils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parnaldo <parnaldo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 14:13:11 by parnaldo          #+#    #+#             */
/*   Updated: 2022/07/05 15:05:30 by parnaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

int ft_strlen(char *s1)
{
	int len;

	len = 0;
	while (s1[len])
	{
		len++;
	}
	return (len);
}

char	*ft_strdup(const char *s1)
{
	int		size;
	char	*str;
	int		index;

	size = ft_strlen((char *)s1) + 1;
	str = (char *) malloc(size);
	if (str == NULL)
		return (NULL);
	index = 0;
	while (s1[index])
	{
	 str[index] = s1[index];
	index++;
	}
	str[index] = '\0';
	return (str);
 }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parnaldo <parnaldo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 19:29:11 by parnaldo          #+#    #+#             */
/*   Updated: 2022/07/06 16:14:17 by parnaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int ft_putchar(char c);
int ft_putstr(char *str);
char *ft_itoa(int n);
int ft_printfdec(int n);
int ft_printf(const char *str, ...);
int ft_strlen(char *s1);
char *ft_strdup(const char *s1);
int ft_print_unsigned(unsigned int n);
int ft_printfhex(unsigned int n);

#endif

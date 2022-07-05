/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parnaldo <parnaldo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 19:29:11 by parnaldo          #+#    #+#             */
/*   Updated: 2022/07/05 11:29:37 by parnaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <stdarg.h>
#include <unistd.h>

int ft_putchar(char c);
int ft_putstr(char *str);
char *ft_itoa(int n);
int ft_printfdec(int n);
int ft_printf(const char *str, ...);
#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalard <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:51:08 by mchalard          #+#    #+#             */
/*   Updated: 2022/01/18 16:21:17 by mchalard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_treat(char c, va_list args, int char_count)
{
	if (c == 'c')
		char_count = ft_putchar(va_arg(args, int), char_count);
	if (c == 's')
		char_count = ft_putstr(va_arg(args, char *), char_count);
	if (c == 'd' || c == 'i')
		char_count = ft_putnbr(va_arg(args, int), char_count);
	if (c == 'u')
		char_count = ft_putun(va_arg(args, int), char_count);
	if (c == 'p')
		char_count = ft_pointer(va_arg(args, void *), char_count);
	if (c == 'x')
		char_count = ft_puthex(va_arg(args, unsigned int), char_count);
	if (c == 'X')
		char_count = ft_puthexa(va_arg(args, unsigned int), char_count);
	if (c == '%')
		char_count = ft_putchar('%', char_count);
	return (char_count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		char_count;
	int		i;
	char	*s;

	char_count = 0;
	i = 0;
	s = (char *)format;
	va_start(args, format);
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			char_count = ft_treat(s[i + 1], args, char_count);
			i++;
		}
		else
			char_count = ft_putchar(s[i], char_count);
		i++;
	}
	va_end(args);
	return (char_count);
}

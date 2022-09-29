/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalard <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 13:38:32 by mchalard          #+#    #+#             */
/*   Updated: 2021/12/01 15:31:33 by mchalard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex(unsigned int n, int char_count)
{
	char			*str;
	int				i;
	unsigned int	nb;

	i = 0;
	nb = 10;
	str = "abcdef";
	while (nb != n)
	{
		i++;
		nb++;
	}
	char_count = ft_putchar(str[i], char_count);
	return (char_count);
}

int	ft_puthexx(unsigned int n, int char_count)
{
	if (n >= 10)
	{
		char_count = ft_puthexx((n / 16), char_count);
		if (n % 16 > 9)
			char_count = ft_hex((n % 16), char_count);
		else
			char_count = ft_putchar((n % 16 + 48), char_count);
	}
	else if (n <= 9 && n > 0)
		char_count = ft_putchar((48 + n), char_count);
	return (char_count);
}

int	ft_puthex(unsigned int n, int char_count)
{
	if (n == 0)
		char_count = ft_putchar('0', char_count);
	else if (n > 0)
		char_count = ft_puthexx(n, char_count);
	return (char_count);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalard <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:51:05 by mchalard          #+#    #+#             */
/*   Updated: 2021/12/01 15:33:28 by mchalard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa(unsigned int n, int char_count)
{
	char			*str;
	int				i;
	unsigned int	nb;

	i = 0;
	nb = 10;
	str = "ABCDEF";
	while (nb != n)
	{
		i++;
		nb++;
	}
	char_count = ft_putchar((str[i]), char_count);
	return (char_count);
}

int	ft_puthexxa(unsigned int n, int char_count)
{
	if (n >= 10)
	{
		char_count = ft_puthexxa((n / 16), char_count);
		if (n % 16 > 9)
			char_count = ft_hexa((n % 16), char_count);
		else
			char_count = ft_putchar((n % 16 + 48), char_count);
	}
	else if (n <= 9 && n > 0)
	{
		char_count = ft_putchar((48 + n), char_count);
	}
	return (char_count);
}

int	ft_puthexa(unsigned int n, int char_count)
{
	if (n == 0)
		char_count = ft_putchar('0', char_count);
	else if (n > 0)
		char_count = ft_puthexxa(n, char_count);
	return (char_count);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putun.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalard <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:23:10 by mchalard          #+#    #+#             */
/*   Updated: 2021/12/01 15:37:47 by mchalard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putlnbr(unsigned long int nb, int char_count)
{
	if (nb >= 10)
	{
		char_count = ft_putlnbr((nb / 10), char_count + 1);
		ft_putchar((nb % 10 + 48), 0);
	}
	else
		char_count = ft_putchar((48 + nb), char_count);
	return (char_count);
}

int	ft_putun(int n, int char_count)
{
	long unsigned int	nb;

	if (n < 0)
	{
		nb = (4294967296 + n);
		char_count = ft_putlnbr(nb, char_count);
	}
	else
		char_count = ft_putnbr(n, char_count);
	return (char_count);
}

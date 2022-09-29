/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalard <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:37:57 by mchalard          #+#    #+#             */
/*   Updated: 2022/01/18 16:22:00 by mchalard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(void *n, int char_count)
{
	long unsigned	*p;
	long unsigned	ptr;

	p = &*n;
	ptr = (long unsigned int)p;
	char_count = ft_putstr("0x", char_count);
	char_count = ft_puthexptr(ptr, char_count);
	return (char_count);
}

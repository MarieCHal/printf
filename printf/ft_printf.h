/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalard <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 10:50:24 by mchalard          #+#    #+#             */
/*   Updated: 2021/12/01 15:23:46 by mchalard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

//int		main(void);
int		ft_printf(const char *format, ...);
int		ft_putchar(char c, int char_count);
int		ft_putstr(char *s, int char_count);
int		ft_puthex(unsigned int i, int char_count);
int		ft_puthexptr(long unsigned int n, int char_count);
int		ft_putnbr(int n, int char_count);
int		ft_putun(int n, int char_count);
int		ft_puthexa(unsigned int n, int char_count);
int		ft_pointer(void *n, int char_count);

#endif

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchalard <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/22 13:54:40 by mchalard          #+#    #+#              #
#    Updated: 2022/02/09 14:56:17 by mchalard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAG = -Wall -Wextra -Werror
NAME = libftprintf.a
SRC = ft_printf.c ft_putchar.c ft_putstr.c ft_puthex.c ft_puthexptr.c ft_putnbr.c ft_putstr.c ft_putun.c ft_puthexa.c ft_pointer.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(FLAG) -o $@ -c $<

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re

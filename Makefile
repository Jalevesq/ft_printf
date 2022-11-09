# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/09 08:52:41 by jalevesq          #+#    #+#              #
#    Updated: 2022/11/09 12:47:22 by jalevesq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c \
	src/ft_memcmp.c \
	src/ft_putchar.c \
	src/ft_putstr.c \
	src/ft_strlen.c \
	src/ft_putnbr_fd.c \

CC=gcc
CFLAGS=-Wall -Werror -Wextra
OBJS=$(SRCS:.c=.o)
all: $(NAME)

$(NAME): $(OBJS)
	ar rcs  $(NAME) $(OBJS)

clean:
	@/bin/rm -f $(OBJS)
	
fclean: clean

	@/bin/rm -f $(NAME) *.out
re: fclean all
	@echo "Re-compilation terminé."


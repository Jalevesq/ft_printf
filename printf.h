/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 08:49:54 by jalevesq          #+#    #+#             */
/*   Updated: 2022/11/09 12:51:10 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int		ft_printf(const char *, ...);
void	ft_putchar(char c);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr(char *s);
size_t	ft_strlen(const char *c);

#endif
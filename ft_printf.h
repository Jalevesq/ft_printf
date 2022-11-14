/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 08:49:54 by jalevesq          #+#    #+#             */
/*   Updated: 2022/11/14 14:34:15 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct
{
	int compt;
} s_count;

void	*ft_memchr(const void *str, int c, size_t n);
int		ft_printf(const char *print, ...);
void	ft_putchar(char c, s_count *count);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_putnbr_fd(int n, int fd, s_count *count);
void	ft_putstr(char *s, s_count *count);
size_t	ft_strlen(const char *c);
char	*ft_dectohexa(int n, int j);
void	ft_puthexa(char *s, s_count *count);

#endif

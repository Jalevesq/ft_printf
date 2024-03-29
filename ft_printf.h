/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 08:49:54 by jalevesq          #+#    #+#             */
/*   Updated: 2022/11/15 16:46:09 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

typedef struct s_count
{
	int	compt;
}	t_count;

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_printf(const char *print, ...);
void	ft_putchar(char c, t_count *count);
void	ft_putstr(char *s, t_count *count);
size_t	ft_strlen(const char *c);
void	ft_putnbr_base(long nb, char *base, t_count *count);

#endif

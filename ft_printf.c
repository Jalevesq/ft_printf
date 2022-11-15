/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 08:49:50 by jalevesq          #+#    #+#             */
/*   Updated: 2022/11/15 16:34:11 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(char print, va_list ap, t_count *count)
{
	if (print == 'c')
		ft_putchar(va_arg(ap, int), count);
	else if (print == 's')
		ft_putstr(va_arg(ap, char *), count);
	else if (print == 'd' || print == 'i')
		ft_putnbr_base(va_arg(ap, int), "0123456789", count);
	else if (print == 'u')
		ft_putnbr_base(va_arg(ap, unsigned int), "0123456789", count);
	else if (print == 'X')
		ft_putnbr_base(va_arg(ap, unsigned int), "0123456789ABCDEF", count);
	else if (print == 'x')
		ft_putnbr_base(va_arg(ap, unsigned int), "0123456789abcdef", count);
	else if (print == 'p')
	{
		ft_putstr("0x", count);
		ft_putnbr_base(va_arg(ap, long), "0123456789abcdef", count);
	}
	return (count->compt);
}

int	ft_printf(const char *print, ...)
{
	t_count	count;
	va_list	ap;

	va_start(ap, print);
	count.compt = 0;
	while (*print)
	{
		if (*print == '%')
		{
			print++;
			if (*print == '%')
				ft_putchar(*print, &count);
			else if (ft_memchr("cspdiuxX", *print, 8) != NULL)
				ft_format(*print, ap, &count);
		}
		else
			ft_putchar(*print, &count);
		print++;
	}
	va_end (ap);
	return (count.compt);
}

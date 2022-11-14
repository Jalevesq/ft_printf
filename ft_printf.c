/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 08:49:50 by jalevesq          #+#    #+#             */
/*   Updated: 2022/11/14 16:25:43 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
int	ft_format(char print, va_list ap, s_count *count)
{
	if (print == 'c')
		ft_putchar(va_arg(ap, int), count);
	return (-1);
}
int ft_printf(const char *print, ...)
{
	va_list ap;
	va_start(ap, print);
	s_count count;

	count.compt = 0;
	while (*print)
	{
		if (*print++ == '%')
		{
			if (ft_memchr("cspdiuxX", *print, 8) != NULL)
				ft_format(*print, ap, &count);
		}
		else
			ft_putchar(*print, &count);
		print++;
	}
	va_end (ap);
	return (count.compt);
}

// int main(void)
// {
// 	ft_printf("%c", 'a');
// }




// #include "ft_printf.h"

// int ft_printf(const char *print, ...)
// {
// 	va_list ap;
// 	va_start(ap, print);
// 	s_count count;

// 	count.compt = 0;
// 	while (*print)
// 	{
// 		if (ft_memcmp(print, "%c", 2) == 0)
// 		{
// 			ft_putchar(va_arg(ap, int), &count);
// 			print++;
// 		}
// 		else if (ft_memcmp(print, "%s", 2) == 0)
// 		{
// 			ft_putstr(va_arg(ap, char *), &count);
// 			print++;
// 		}
// 		else if (ft_memcmp(print, "%d", 2) == 0 || ft_memcmp(print, "%i", 2 == 0))
// 		{
// 			ft_putnbr_fd(va_arg(ap, int), 1, &count);
// 			print++;
// 		}
// 		else if (ft_memcmp(print, "%X", 2) == 0)
// 		{
// 		 	ft_puthexa(ft_dectohexa(va_arg(ap, int), 0), &count);
// 			print++;
// 		}
// 		else if (ft_memcmp(print, "%x", 2) == 0)
// 			ft_puthexa(ft_dectohexa(va_arg(ap, int), 1), &count);
// 		// else if (ft_memcmp(print, "%u", 2) == 0)
// 		// 	ft_putnbr_fd()
// 		else if ((ft_memcmp(print, "%%", 2) == 0))
// 		{
// 			ft_putchar(*print++, &count);
// 			ft_putchar(va_arg(ap, int), &count);
// 		}
// 		else if (ft_memcmp(print, "%", 1) != 0)
// 			ft_putchar(*print, &count);
// 		print++;
// 	}
// 	va_end (ap);
// 	return (count.compt); // Ne lis pas le string si aucun param
// }

// gccf ft_printf.c src/ft_memcmp.c src/ft_putchar.c src/ft_putstr.c src/ft_strlen.c src/ft_putnbr_fd.c src/ft_dectohexa.c
// #include <stdio.h>


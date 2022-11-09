/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 08:49:50 by jalevesq          #+#    #+#             */
/*   Updated: 2022/11/09 15:46:49 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_printf(const char *print, ...)
{
		va_list ap;
		va_start(ap, print);
		while (*print)
		{
			if (ft_memcmp(print, "%c", 2) == 0)
				ft_putchar(va_arg(ap, int));
			else if (ft_memcmp(print, "%s", 2) == 0)
				ft_putstr(va_arg(ap, char *));
			else if (ft_memcmp(print, "%d", 2) == 0 || ft_memcmp(print, "%i", 2 == 0))
				ft_putnbr_fd(va_arg(ap, int), 1);
			else if ((ft_memcmp(print, "%%", 2) == 0))
			{
				ft_putchar(*print++);
				ft_putchar(va_arg(ap, int));
			}
			print++;
		}
		va_end (ap);
		return (1); // Doit return la length du output
}

int main(void)
{
	ft_printf("%s %%d", "Test", 100);
}

// Check %%
// gcc ft_printf.c src/ft_memcmp.c src/ft_putchar.c src/ft_putstr.c src/ft_strlen.c src/ft_putnbr_fd.c
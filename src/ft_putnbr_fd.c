/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:45:04 by jalevesq          #+#    #+#             */
/*   Updated: 2022/11/14 10:59:30 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putnbr_fd(int n, int fd, s_count *count)
{
	if (n == -2147483648)
	{
		ft_putchar('-', count);
		ft_putchar('2', count);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar('-', count);
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd, count);
		ft_putnbr_fd(n % 10, fd, count);
	}
	else
	{
		ft_putchar(n + 48, count);
	}
}

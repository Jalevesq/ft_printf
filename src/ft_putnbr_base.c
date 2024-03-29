/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:55:05 by jalevesq          #+#    #+#             */
/*   Updated: 2022/11/15 16:34:20 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putnbr_base(long nb, char *base, t_count *count)
{
	if (nb < 0 && ft_strlen(base) == 10)
	{
		ft_putchar('-', count);
		nb *= -1;
	}
	if ((size_t)nb >= ft_strlen(base))
	{
		ft_putnbr_base(nb / ft_strlen(base), base, count);
		ft_putnbr_base(nb % ft_strlen(base), base, count);
	}
	else
		ft_putchar(base[nb], count);
}

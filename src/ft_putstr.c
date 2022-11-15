/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:39:01 by jalevesq          #+#    #+#             */
/*   Updated: 2022/11/15 16:34:27 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putstr(char *s, t_count *count)
{
	int		i;
	char	a[7];

	i = 0;
	if (!s)
	{
		ft_strlcpy(a, "(null)", 7);
		while (a[i])
		{
			ft_putchar(a[i], count);
			i++;
		}
	}
	if (s)
	{
		while (s[i])
		{
			ft_putchar(s[i], count);
			i++;
		}
	}
}

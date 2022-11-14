/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:53:20 by jalevesq          #+#    #+#             */
/*   Updated: 2022/11/14 15:20:45 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*cstr;
	unsigned char	c2;

	cstr = (unsigned char *)str;
	c2 = (unsigned char)c;
	while (n > 0)
	{
		if (*cstr == c2)
			return (cstr);
		n--;
		cstr++;
	}
	return (NULL);
}
